#include "stat.h"

//calculate GB STATS
static inline uint8_t gb_calc_ev(uint16_t stat_exp) {
	if(stat_exp >= 0xfe02) {
		return 64;
	}
	uint8_t b = 0;
	while(b * b < stat_exp) {
		++b;
	}
	return b >> 2;
}

static inline uint16_t gb_calc_base_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint16_t stat_exp) {
	return ((((uint32_t)base_stat + iv) << 1) + gb_calc_ev(stat_exp)) * (uint32_t)level / 100;
}

// non-HP: (((Base + IV) * 2 + ceil(Sqrt(stat exp)) / 4) * Level) / 100 + 5
/**
 * @brief Used to calculate a non-HP stat for a pokemon from generation 1 or 2.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param stat_exp The pokemon's stat experience.
 * @return The value for the pokemons stat.
 */
uint16_t gb_calc_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint16_t stat_exp) {
	return gb_calc_base_stat(level, base_stat, iv, stat_exp) + 5;
}

// HP: (((Base + IV) * 2 + ceil(Sqrt(stat exp)) / 4) * Level) / 100 + Level + 10
/**
 * @brief Used to calculate the HP stat for a pokemon from generation 1 or 2.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param stat_exp The pokemon's stat experience.
 * @return The value for the pokemons stat.
 */
uint16_t gb_calc_hp_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint16_t stat_exp) {
	return gb_calc_base_stat(level, base_stat, iv, stat_exp) + level + 10;
}

static inline uint16_t gba_calc_base_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev) {
	return (((uint32_t)base_stat << 1) + iv + (ev >> 2)) * (uint32_t)level / 100;
}

//; non-HP (((base_stat * 2) + iv + (ev / 4)) * level) / 100 + 5
/**
 * @brief Used to calculate a non-HP stat for a pokemon from generation 3.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @param nature The pokemon's nature as it relates to the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t gba_calc_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev, stat_nature_t nature) {
	uint32_t stat = gba_calc_base_stat(level, base_stat, iv, ev) + 5;
	if(nature == STAT_NATURE_POSITIVE) {
		return stat * 90 / 100;
	}
	if(nature == STAT_NATURE_NEGATIVE) {
		return stat * 110 / 100;
	}
	return stat;
}

//; HP (((base_stat * 2) + iv + (ev / 4)) * level) / 100 + level + 10
/**
 * @brief Used to calculate the HP stat for a pokemon from generation 3.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t gba_calc_hp_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev) {
	return gba_calc_base_stat(level, base_stat, iv, ev) + level + 10;
}

/**
 * @brief Used to calculate a non-HP stat for a pokemon from generation 4.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @param nature The pokemon's nature as it relates to the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t nds_calc_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev, stat_nature_t nature) {
	return gba_calc_stat(level, base_stat, iv, ev, nature);
}

/**
 * @brief Used to calculate the HP stat for a pokemon from generation 4.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t nds_calc_hp_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev) {
	return gba_calc_hp_stat(level, base_stat, iv, ev);
}

/**
 * @brief Used to calculate a non-HP stat for a pokemon from generation 5.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @param nature The pokemon's nature as it relates to the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t dsi_calc_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev, stat_nature_t nature) {
	return gba_calc_stat(level, base_stat, iv, ev, nature);
}

/**
 * @brief Used to calculate the HP stat for a pokemon from generation 5.
 * @param level The pokemon's level.
 * @param base_stat The base stat we are claculating.
 * @param iv The pokemon's iv for the given stat.
 * @param ev The pokemon's effort value for the given stat.
 * @return The value for the pokemons stat.
 */
uint16_t dsi_calc_hp_stat(uint8_t level, uint8_t base_stat, uint8_t iv, uint8_t ev) {
	return gba_calc_hp_stat(level, base_stat, iv, ev);
}