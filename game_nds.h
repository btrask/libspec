/**
 * The NDS games, Generation 4 games. These games include Diamond, Pearl, Platinum, Heart Gold and Soul Silver.
 *
 * @file game_nds.h
 * @brief Contains the structures and functions for editing NDS pokemon save games.
 */

#ifndef __NDS_H__
#define __NDS_H__

#include <stdlib.h>
#include <stdint.h>
#include "prng.h"
#include "checksum.h"
#include "pkm.h"

//SAVE
typedef enum {
	NDS_TYPE_UNKNOWN,
	NDS_TYPE_DP,
	NDS_TYPE_PLAT,
	NDS_TYPE_HGSS
} nds_savetype_t;

enum {
	NDS_SAVE_SIZE = 0x80000
};

typedef struct {
	uint8_t *data;
	nds_savetype_t type;
	void *internal;
} nds_save_t;

void nds_text_to_ucs2(char16_t *dst, char16_t *src, size_t size);
void ucs2_to_nds_text(char16_t *dst, char16_t *src, size_t size);

nds_save_t *nds_read_main_save(const uint8_t *);
nds_save_t *nds_read_backup_save(const uint8_t *);
void nds_free_save(nds_save_t *);

uint8_t *nds_create_data();

void nds_write_main_save(uint8_t *, const nds_save_t *);
void nds_write_backup_save(uint8_t *, const nds_save_t *);

/* Pokemon editing */


#endif //__NDS_H__
