// Extraction code copyright 2023 Ben Trask. MIT licensed.
// The actual data is either copyrighted by Game Freak or public domain.

// TODO: This file is currently overly specific to Gen III FireRed/LeafGreen. It doesn't even include Pokemon past #151.

/*
// https://bulbapedia.bulbagarden.net/wiki/List_of_Pok%C3%A9mon_by_base_stats_(Generation_II-V)
var table = document.querySelectorAll("table")[1];
var rows = Array.from(table.querySelectorAll("tr")).slice(1).slice(0, 151);
rows.map(function(row) {
	var cols = row.querySelectorAll("td");
	var id = Number(cols[0].textContent);
	var name = cols[2].textContent.replace(/^\s+|\s+$/g, "").replace(/'/g, "’");
	var nameCaps = name.toUpperCase();
	var token = name.toUpperCase().replace(/[. -]+/g, "_").replace(/['’]/g, "").replace(/♀/g, "F").replace(/♂/g, "M");
	var stats = [cols[3], cols[4], cols[5], cols[8], cols[6], cols[7]].map(function(col) {
		return Number(col.textContent);
	}).join(", ");
	return "\tXX("+id+", "+token+", \""+nameCaps+"\", \""+name+"\", "+stats+")";
}).join(" \\\n");
*/
#define SPECIES(XX) \
	XX(1, BULBASAUR, "BULBASAUR", "Bulbasaur", 45, 49, 49, 45, 65, 65) \
	XX(2, IVYSAUR, "IVYSAUR", "Ivysaur", 60, 62, 63, 60, 80, 80) \
	XX(3, VENUSAUR, "VENUSAUR", "Venusaur", 80, 82, 83, 80, 100, 100) \
	XX(4, CHARMANDER, "CHARMANDER", "Charmander", 39, 52, 43, 65, 60, 50) \
	XX(5, CHARMELEON, "CHARMELEON", "Charmeleon", 58, 64, 58, 80, 80, 65) \
	XX(6, CHARIZARD, "CHARIZARD", "Charizard", 78, 84, 78, 100, 109, 85) \
	XX(7, SQUIRTLE, "SQUIRTLE", "Squirtle", 44, 48, 65, 43, 50, 64) \
	XX(8, WARTORTLE, "WARTORTLE", "Wartortle", 59, 63, 80, 58, 65, 80) \
	XX(9, BLASTOISE, "BLASTOISE", "Blastoise", 79, 83, 100, 78, 85, 105) \
	XX(10, CATERPIE, "CATERPIE", "Caterpie", 45, 30, 35, 45, 20, 20) \
	XX(11, METAPOD, "METAPOD", "Metapod", 50, 20, 55, 30, 25, 25) \
	XX(12, BUTTERFREE, "BUTTERFREE", "Butterfree", 60, 45, 50, 70, 80, 80) \
	XX(13, WEEDLE, "WEEDLE", "Weedle", 40, 35, 30, 50, 20, 20) \
	XX(14, KAKUNA, "KAKUNA", "Kakuna", 45, 25, 50, 35, 25, 25) \
	XX(15, BEEDRILL, "BEEDRILL", "Beedrill", 65, 80, 40, 75, 45, 80) \
	XX(16, PIDGEY, "PIDGEY", "Pidgey", 40, 45, 40, 56, 35, 35) \
	XX(17, PIDGEOTTO, "PIDGEOTTO", "Pidgeotto", 63, 60, 55, 71, 50, 50) \
	XX(18, PIDGEOT, "PIDGEOT", "Pidgeot", 83, 80, 75, 91, 70, 70) \
	XX(19, RATTATA, "RATTATA", "Rattata", 30, 56, 35, 72, 25, 35) \
	XX(20, RATICATE, "RATICATE", "Raticate", 55, 81, 60, 97, 50, 70) \
	XX(21, SPEAROW, "SPEAROW", "Spearow", 40, 60, 30, 70, 31, 31) \
	XX(22, FEAROW, "FEAROW", "Fearow", 65, 90, 65, 100, 61, 61) \
	XX(23, EKANS, "EKANS", "Ekans", 35, 60, 44, 55, 40, 54) \
	XX(24, ARBOK, "ARBOK", "Arbok", 60, 85, 69, 80, 65, 79) \
	XX(25, PIKACHU, "PIKACHU", "Pikachu", 35, 55, 30, 90, 50, 40) \
	XX(26, RAICHU, "RAICHU", "Raichu", 60, 90, 55, 100, 90, 80) \
	XX(27, SANDSHREW, "SANDSHREW", "Sandshrew", 50, 75, 85, 40, 20, 30) \
	XX(28, SANDSLASH, "SANDSLASH", "Sandslash", 75, 100, 110, 65, 45, 55) \
	XX(29, NIDORANF, "NIDORAN♀", "Nidoran♀", 55, 47, 52, 41, 40, 40) \
	XX(30, NIDORINA, "NIDORINA", "Nidorina", 70, 62, 67, 56, 55, 55) \
	XX(31, NIDOQUEEN, "NIDOQUEEN", "Nidoqueen", 90, 82, 87, 76, 75, 85) \
	XX(32, NIDORANM, "NIDORAN♂", "Nidoran♂", 46, 57, 40, 50, 40, 40) \
	XX(33, NIDORINO, "NIDORINO", "Nidorino", 61, 72, 57, 65, 55, 55) \
	XX(34, NIDOKING, "NIDOKING", "Nidoking", 81, 92, 77, 85, 85, 75) \
	XX(35, CLEFAIRY, "CLEFAIRY", "Clefairy", 70, 45, 48, 35, 60, 65) \
	XX(36, CLEFABLE, "CLEFABLE", "Clefable", 95, 70, 73, 60, 85, 90) \
	XX(37, VULPIX, "VULPIX", "Vulpix", 38, 41, 40, 65, 50, 65) \
	XX(38, NINETALES, "NINETALES", "Ninetales", 73, 76, 75, 100, 81, 100) \
	XX(39, JIGGLYPUFF, "JIGGLYPUFF", "Jigglypuff", 115, 45, 20, 20, 45, 25) \
	XX(40, WIGGLYTUFF, "WIGGLYTUFF", "Wigglytuff", 140, 70, 45, 45, 75, 50) \
	XX(41, ZUBAT, "ZUBAT", "Zubat", 40, 45, 35, 55, 30, 40) \
	XX(42, GOLBAT, "GOLBAT", "Golbat", 75, 80, 70, 90, 65, 75) \
	XX(43, ODDISH, "ODDISH", "Oddish", 45, 50, 55, 30, 75, 65) \
	XX(44, GLOOM, "GLOOM", "Gloom", 60, 65, 70, 40, 85, 75) \
	XX(45, VILEPLUME, "VILEPLUME", "Vileplume", 75, 80, 85, 50, 100, 90) \
	XX(46, PARAS, "PARAS", "Paras", 35, 70, 55, 25, 45, 55) \
	XX(47, PARASECT, "PARASECT", "Parasect", 60, 95, 80, 30, 60, 80) \
	XX(48, VENONAT, "VENONAT", "Venonat", 60, 55, 50, 45, 40, 55) \
	XX(49, VENOMOTH, "VENOMOTH", "Venomoth", 70, 65, 60, 90, 90, 75) \
	XX(50, DIGLETT, "DIGLETT", "Diglett", 10, 55, 25, 95, 35, 45) \
	XX(51, DUGTRIO, "DUGTRIO", "Dugtrio", 35, 80, 50, 120, 50, 70) \
	XX(52, MEOWTH, "MEOWTH", "Meowth", 40, 45, 35, 90, 40, 40) \
	XX(53, PERSIAN, "PERSIAN", "Persian", 65, 70, 60, 115, 65, 65) \
	XX(54, PSYDUCK, "PSYDUCK", "Psyduck", 50, 52, 48, 55, 65, 50) \
	XX(55, GOLDUCK, "GOLDUCK", "Golduck", 80, 82, 78, 85, 95, 80) \
	XX(56, MANKEY, "MANKEY", "Mankey", 40, 80, 35, 70, 35, 45) \
	XX(57, PRIMEAPE, "PRIMEAPE", "Primeape", 65, 105, 60, 95, 60, 70) \
	XX(58, GROWLITHE, "GROWLITHE", "Growlithe", 55, 70, 45, 60, 70, 50) \
	XX(59, ARCANINE, "ARCANINE", "Arcanine", 90, 110, 80, 95, 100, 80) \
	XX(60, POLIWAG, "POLIWAG", "Poliwag", 40, 50, 40, 90, 40, 40) \
	XX(61, POLIWHIRL, "POLIWHIRL", "Poliwhirl", 65, 65, 65, 90, 50, 50) \
	XX(62, POLIWRATH, "POLIWRATH", "Poliwrath", 90, 85, 95, 70, 70, 90) \
	XX(63, ABRA, "ABRA", "Abra", 25, 20, 15, 90, 105, 55) \
	XX(64, KADABRA, "KADABRA", "Kadabra", 40, 35, 30, 105, 120, 70) \
	XX(65, ALAKAZAM, "ALAKAZAM", "Alakazam", 55, 50, 45, 120, 135, 85) \
	XX(66, MACHOP, "MACHOP", "Machop", 70, 80, 50, 35, 35, 35) \
	XX(67, MACHOKE, "MACHOKE", "Machoke", 80, 100, 70, 45, 50, 60) \
	XX(68, MACHAMP, "MACHAMP", "Machamp", 90, 130, 80, 55, 65, 85) \
	XX(69, BELLSPROUT, "BELLSPROUT", "Bellsprout", 50, 75, 35, 40, 70, 30) \
	XX(70, WEEPINBELL, "WEEPINBELL", "Weepinbell", 65, 90, 50, 55, 85, 45) \
	XX(71, VICTREEBEL, "VICTREEBEL", "Victreebel", 80, 105, 65, 70, 100, 60) \
	XX(72, TENTACOOL, "TENTACOOL", "Tentacool", 40, 40, 35, 70, 50, 100) \
	XX(73, TENTACRUEL, "TENTACRUEL", "Tentacruel", 80, 70, 65, 100, 80, 120) \
	XX(74, GEODUDE, "GEODUDE", "Geodude", 40, 80, 100, 20, 30, 30) \
	XX(75, GRAVELER, "GRAVELER", "Graveler", 55, 95, 115, 35, 45, 45) \
	XX(76, GOLEM, "GOLEM", "Golem", 80, 110, 130, 45, 55, 65) \
	XX(77, PONYTA, "PONYTA", "Ponyta", 50, 85, 55, 90, 65, 65) \
	XX(78, RAPIDASH, "RAPIDASH", "Rapidash", 65, 100, 70, 105, 80, 80) \
	XX(79, SLOWPOKE, "SLOWPOKE", "Slowpoke", 90, 65, 65, 15, 40, 40) \
	XX(80, SLOWBRO, "SLOWBRO", "Slowbro", 95, 75, 110, 30, 100, 80) \
	XX(81, MAGNEMITE, "MAGNEMITE", "Magnemite", 25, 35, 70, 45, 95, 55) \
	XX(82, MAGNETON, "MAGNETON", "Magneton", 50, 60, 95, 70, 120, 70) \
	XX(83, FARFETCHD, "FARFETCH’D", "Farfetch’d", 52, 65, 55, 60, 58, 62) \
	XX(84, DODUO, "DODUO", "Doduo", 35, 85, 45, 75, 35, 35) \
	XX(85, DODRIO, "DODRIO", "Dodrio", 60, 110, 70, 100, 60, 60) \
	XX(86, SEEL, "SEEL", "Seel", 65, 45, 55, 45, 45, 70) \
	XX(87, DEWGONG, "DEWGONG", "Dewgong", 90, 70, 80, 70, 70, 95) \
	XX(88, GRIMER, "GRIMER", "Grimer", 80, 80, 50, 25, 40, 50) \
	XX(89, MUK, "MUK", "Muk", 105, 105, 75, 50, 65, 100) \
	XX(90, SHELLDER, "SHELLDER", "Shellder", 30, 65, 100, 40, 45, 25) \
	XX(91, CLOYSTER, "CLOYSTER", "Cloyster", 50, 95, 180, 70, 85, 45) \
	XX(92, GASTLY, "GASTLY", "Gastly", 30, 35, 30, 80, 100, 35) \
	XX(93, HAUNTER, "HAUNTER", "Haunter", 45, 50, 45, 95, 115, 55) \
	XX(94, GENGAR, "GENGAR", "Gengar", 60, 65, 60, 110, 130, 75) \
	XX(95, ONIX, "ONIX", "Onix", 35, 45, 160, 70, 30, 45) \
	XX(96, DROWZEE, "DROWZEE", "Drowzee", 60, 48, 45, 42, 43, 90) \
	XX(97, HYPNO, "HYPNO", "Hypno", 85, 73, 70, 67, 73, 115) \
	XX(98, KRABBY, "KRABBY", "Krabby", 30, 105, 90, 50, 25, 25) \
	XX(99, KINGLER, "KINGLER", "Kingler", 55, 130, 115, 75, 50, 50) \
	XX(100, VOLTORB, "VOLTORB", "Voltorb", 40, 30, 50, 100, 55, 55) \
	XX(101, ELECTRODE, "ELECTRODE", "Electrode", 60, 50, 70, 140, 80, 80) \
	XX(102, EXEGGCUTE, "EXEGGCUTE", "Exeggcute", 60, 40, 80, 40, 60, 45) \
	XX(103, EXEGGUTOR, "EXEGGUTOR", "Exeggutor", 95, 95, 85, 55, 125, 65) \
	XX(104, CUBONE, "CUBONE", "Cubone", 50, 50, 95, 35, 40, 50) \
	XX(105, MAROWAK, "MAROWAK", "Marowak", 60, 80, 110, 45, 50, 80) \
	XX(106, HITMONLEE, "HITMONLEE", "Hitmonlee", 50, 120, 53, 87, 35, 110) \
	XX(107, HITMONCHAN, "HITMONCHAN", "Hitmonchan", 50, 105, 79, 76, 35, 110) \
	XX(108, LICKITUNG, "LICKITUNG", "Lickitung", 90, 55, 75, 30, 60, 75) \
	XX(109, KOFFING, "KOFFING", "Koffing", 40, 65, 95, 35, 60, 45) \
	XX(110, WEEZING, "WEEZING", "Weezing", 65, 90, 120, 60, 85, 70) \
	XX(111, RHYHORN, "RHYHORN", "Rhyhorn", 80, 85, 95, 25, 30, 30) \
	XX(112, RHYDON, "RHYDON", "Rhydon", 105, 130, 120, 40, 45, 45) \
	XX(113, CHANSEY, "CHANSEY", "Chansey", 250, 5, 5, 50, 35, 105) \
	XX(114, TANGELA, "TANGELA", "Tangela", 65, 55, 115, 60, 100, 40) \
	XX(115, KANGASKHAN, "KANGASKHAN", "Kangaskhan", 105, 95, 80, 90, 40, 80) \
	XX(116, HORSEA, "HORSEA", "Horsea", 30, 40, 70, 60, 70, 25) \
	XX(117, SEADRA, "SEADRA", "Seadra", 55, 65, 95, 85, 95, 45) \
	XX(118, GOLDEEN, "GOLDEEN", "Goldeen", 45, 67, 60, 63, 35, 50) \
	XX(119, SEAKING, "SEAKING", "Seaking", 80, 92, 65, 68, 65, 80) \
	XX(120, STARYU, "STARYU", "Staryu", 30, 45, 55, 85, 70, 55) \
	XX(121, STARMIE, "STARMIE", "Starmie", 60, 75, 85, 115, 100, 85) \
	XX(122, MR_MIME, "MR. MIME", "Mr. Mime", 40, 45, 65, 90, 100, 120) \
	XX(123, SCYTHER, "SCYTHER", "Scyther", 70, 110, 80, 105, 55, 80) \
	XX(124, JYNX, "JYNX", "Jynx", 65, 50, 35, 95, 115, 95) \
	XX(125, ELECTABUZZ, "ELECTABUZZ", "Electabuzz", 65, 83, 57, 105, 95, 85) \
	XX(126, MAGMAR, "MAGMAR", "Magmar", 65, 95, 57, 93, 100, 85) \
	XX(127, PINSIR, "PINSIR", "Pinsir", 65, 125, 100, 85, 55, 70) \
	XX(128, TAUROS, "TAUROS", "Tauros", 75, 100, 95, 110, 40, 70) \
	XX(129, MAGIKARP, "MAGIKARP", "Magikarp", 20, 10, 55, 80, 15, 20) \
	XX(130, GYARADOS, "GYARADOS", "Gyarados", 95, 125, 79, 81, 60, 100) \
	XX(131, LAPRAS, "LAPRAS", "Lapras", 130, 85, 80, 60, 85, 95) \
	XX(132, DITTO, "DITTO", "Ditto", 48, 48, 48, 48, 48, 48) \
	XX(133, EEVEE, "EEVEE", "Eevee", 55, 55, 50, 55, 45, 65) \
	XX(134, VAPOREON, "VAPOREON", "Vaporeon", 130, 65, 60, 65, 110, 95) \
	XX(135, JOLTEON, "JOLTEON", "Jolteon", 65, 65, 60, 130, 110, 95) \
	XX(136, FLAREON, "FLAREON", "Flareon", 65, 130, 60, 65, 95, 110) \
	XX(137, PORYGON, "PORYGON", "Porygon", 65, 60, 70, 40, 85, 75) \
	XX(138, OMANYTE, "OMANYTE", "Omanyte", 35, 40, 100, 35, 90, 55) \
	XX(139, OMASTAR, "OMASTAR", "Omastar", 70, 60, 125, 55, 115, 70) \
	XX(140, KABUTO, "KABUTO", "Kabuto", 30, 80, 90, 55, 55, 45) \
	XX(141, KABUTOPS, "KABUTOPS", "Kabutops", 60, 115, 105, 80, 65, 70) \
	XX(142, AERODACTYL, "AERODACTYL", "Aerodactyl", 80, 105, 65, 130, 60, 75) \
	XX(143, SNORLAX, "SNORLAX", "Snorlax", 160, 110, 65, 30, 65, 110) \
	XX(144, ARTICUNO, "ARTICUNO", "Articuno", 90, 85, 100, 85, 95, 125) \
	XX(145, ZAPDOS, "ZAPDOS", "Zapdos", 90, 90, 85, 100, 125, 90) \
	XX(146, MOLTRES, "MOLTRES", "Moltres", 90, 100, 90, 90, 125, 85) \
	XX(147, DRATINI, "DRATINI", "Dratini", 41, 64, 45, 50, 50, 50) \
	XX(148, DRAGONAIR, "DRAGONAIR", "Dragonair", 61, 84, 65, 70, 70, 70) \
	XX(149, DRAGONITE, "DRAGONITE", "Dragonite", 91, 134, 95, 80, 100, 100) \
	XX(150, MEWTWO, "MEWTWO", "Mewtwo", 106, 110, 90, 130, 154, 90) \
	XX(151, MEW, "MEW", "Mew", 100, 100, 100, 100, 100, 100)
enum {
#define XX(id, token, nameCaps, name, hp, atk, def, spd, satk, sdef) token = (uint16_t)id,
SPECIES(XX)
#undef XX
};
struct {
	uint16_t id;
	char const *nameCaps;
	char const *name;
	pk3_effort_t stats;
} const species[] = {
#define XX(id, token, nameCaps, name, hp, atk, def, spd, satk, sdef) { id, nameCaps, name, { hp, atk, def, spd, satk, sdef } },
{ 0, NULL, NULL, { 0, 0, 0, 0, 0, 0 } },
SPECIES(XX)
#undef XX
};

/*
// https://bulbapedia.bulbagarden.net/wiki/List_of_moves
var table = document.querySelectorAll("table")[1];
var rows = Array.from(table.querySelectorAll("tr")).slice(1);
rows.map(function(row) {
	var cols = row.querySelectorAll("td");
	var id = Number(cols[0].textContent);
	var name = cols[1].textContent.replace(/^\s+|\s+$/g, "").replace(/'/g, "’");
	var token = name.toUpperCase().replace(/[. -]+/g, "_").replace(/['’]/g, "");
	var pp = Number(cols[4].textContent);
	var gen = cols[7].textContent.replace(/^\s+|\s+$/g, "");
	if("I" != gen && "II" != gen && "III" != gen) return null;
	if("REST" == token) pp = 10; // Mistake in wiki
	if("LEECH_LIFE" == token) pp = 15; // Mistake in wiki
	if("THRASH" == token) pp = 20; // Mistake in wiki
	return "\tXX("+id+", "+token+", \""+name+"\", "+pp+")";
}).filter(function(row) { return !!row; }).join(" \\\n")+"\n";
*/
#define MOVES(XX) \
	XX(1, POUND, "Pound", 35) \
	XX(2, KARATE_CHOP, "Karate Chop", 25) \
	XX(3, DOUBLE_SLAP, "Double Slap", 10) \
	XX(4, COMET_PUNCH, "Comet Punch", 15) \
	XX(5, MEGA_PUNCH, "Mega Punch", 20) \
	XX(6, PAY_DAY, "Pay Day", 20) \
	XX(7, FIRE_PUNCH, "Fire Punch", 15) \
	XX(8, ICE_PUNCH, "Ice Punch", 15) \
	XX(9, THUNDER_PUNCH, "Thunder Punch", 15) \
	XX(10, SCRATCH, "Scratch", 35) \
	XX(11, VISE_GRIP, "Vise Grip", 30) \
	XX(12, GUILLOTINE, "Guillotine", 5) \
	XX(13, RAZOR_WIND, "Razor Wind", 10) \
	XX(14, SWORDS_DANCE, "Swords Dance", 20) \
	XX(15, CUT, "Cut", 30) \
	XX(16, GUST, "Gust", 35) \
	XX(17, WING_ATTACK, "Wing Attack", 35) \
	XX(18, WHIRLWIND, "Whirlwind", 20) \
	XX(19, FLY, "Fly", 15) \
	XX(20, BIND, "Bind", 20) \
	XX(21, SLAM, "Slam", 20) \
	XX(22, VINE_WHIP, "Vine Whip", 25) \
	XX(23, STOMP, "Stomp", 20) \
	XX(24, DOUBLE_KICK, "Double Kick", 30) \
	XX(25, MEGA_KICK, "Mega Kick", 5) \
	XX(26, JUMP_KICK, "Jump Kick", 10) \
	XX(27, ROLLING_KICK, "Rolling Kick", 15) \
	XX(28, SAND_ATTACK, "Sand Attack", 15) \
	XX(29, HEADBUTT, "Headbutt", 15) \
	XX(30, HORN_ATTACK, "Horn Attack", 25) \
	XX(31, FURY_ATTACK, "Fury Attack", 20) \
	XX(32, HORN_DRILL, "Horn Drill", 5) \
	XX(33, TACKLE, "Tackle", 35) \
	XX(34, BODY_SLAM, "Body Slam", 15) \
	XX(35, WRAP, "Wrap", 20) \
	XX(36, TAKE_DOWN, "Take Down", 20) \
	XX(37, THRASH, "Thrash", 20) \
	XX(38, DOUBLE_EDGE, "Double-Edge", 15) \
	XX(39, TAIL_WHIP, "Tail Whip", 30) \
	XX(40, POISON_STING, "Poison Sting", 35) \
	XX(41, TWINEEDLE, "Twineedle", 20) \
	XX(42, PIN_MISSILE, "Pin Missile", 20) \
	XX(43, LEER, "Leer", 30) \
	XX(44, BITE, "Bite", 25) \
	XX(45, GROWL, "Growl", 40) \
	XX(46, ROAR, "Roar", 20) \
	XX(47, SING, "Sing", 15) \
	XX(48, SUPERSONIC, "Supersonic", 20) \
	XX(49, SONIC_BOOM, "Sonic Boom", 20) \
	XX(50, DISABLE, "Disable", 20) \
	XX(51, ACID, "Acid", 30) \
	XX(52, EMBER, "Ember", 25) \
	XX(53, FLAMETHROWER, "Flamethrower", 15) \
	XX(54, MIST, "Mist", 30) \
	XX(55, WATER_GUN, "Water Gun", 25) \
	XX(56, HYDRO_PUMP, "Hydro Pump", 5) \
	XX(57, SURF, "Surf", 15) \
	XX(58, ICE_BEAM, "Ice Beam", 10) \
	XX(59, BLIZZARD, "Blizzard", 5) \
	XX(60, PSYBEAM, "Psybeam", 20) \
	XX(61, BUBBLE_BEAM, "Bubble Beam", 20) \
	XX(62, AURORA_BEAM, "Aurora Beam", 20) \
	XX(63, HYPER_BEAM, "Hyper Beam", 5) \
	XX(64, PECK, "Peck", 35) \
	XX(65, DRILL_PECK, "Drill Peck", 20) \
	XX(66, SUBMISSION, "Submission", 20) \
	XX(67, LOW_KICK, "Low Kick", 20) \
	XX(68, COUNTER, "Counter", 20) \
	XX(69, SEISMIC_TOSS, "Seismic Toss", 20) \
	XX(70, STRENGTH, "Strength", 15) \
	XX(71, ABSORB, "Absorb", 25) \
	XX(72, MEGA_DRAIN, "Mega Drain", 15) \
	XX(73, LEECH_SEED, "Leech Seed", 10) \
	XX(74, GROWTH, "Growth", 20) \
	XX(75, RAZOR_LEAF, "Razor Leaf", 25) \
	XX(76, SOLAR_BEAM, "Solar Beam", 10) \
	XX(77, POISON_POWDER, "Poison Powder", 35) \
	XX(78, STUN_SPORE, "Stun Spore", 30) \
	XX(79, SLEEP_POWDER, "Sleep Powder", 15) \
	XX(80, PETAL_DANCE, "Petal Dance", 10) \
	XX(81, STRING_SHOT, "String Shot", 40) \
	XX(82, DRAGON_RAGE, "Dragon Rage", 10) \
	XX(83, FIRE_SPIN, "Fire Spin", 15) \
	XX(84, THUNDER_SHOCK, "Thunder Shock", 30) \
	XX(85, THUNDERBOLT, "Thunderbolt", 15) \
	XX(86, THUNDER_WAVE, "Thunder Wave", 20) \
	XX(87, THUNDER, "Thunder", 10) \
	XX(88, ROCK_THROW, "Rock Throw", 15) \
	XX(89, EARTHQUAKE, "Earthquake", 10) \
	XX(90, FISSURE, "Fissure", 5) \
	XX(91, DIG, "Dig", 10) \
	XX(92, TOXIC, "Toxic", 10) \
	XX(93, CONFUSION, "Confusion", 25) \
	XX(94, PSYCHIC, "Psychic", 10) \
	XX(95, HYPNOSIS, "Hypnosis", 20) \
	XX(96, MEDITATE, "Meditate", 40) \
	XX(97, AGILITY, "Agility", 30) \
	XX(98, QUICK_ATTACK, "Quick Attack", 30) \
	XX(99, RAGE, "Rage", 20) \
	XX(100, TELEPORT, "Teleport", 20) \
	XX(101, NIGHT_SHADE, "Night Shade", 15) \
	XX(102, MIMIC, "Mimic", 10) \
	XX(103, SCREECH, "Screech", 40) \
	XX(104, DOUBLE_TEAM, "Double Team", 15) \
	XX(105, RECOVER, "Recover", 5) \
	XX(106, HARDEN, "Harden", 30) \
	XX(107, MINIMIZE, "Minimize", 10) \
	XX(108, SMOKESCREEN, "Smokescreen", 20) \
	XX(109, CONFUSE_RAY, "Confuse Ray", 10) \
	XX(110, WITHDRAW, "Withdraw", 40) \
	XX(111, DEFENSE_CURL, "Defense Curl", 40) \
	XX(112, BARRIER, "Barrier", 20) \
	XX(113, LIGHT_SCREEN, "Light Screen", 30) \
	XX(114, HAZE, "Haze", 30) \
	XX(115, REFLECT, "Reflect", 20) \
	XX(116, FOCUS_ENERGY, "Focus Energy", 30) \
	XX(117, BIDE, "Bide", 10) \
	XX(118, METRONOME, "Metronome", 10) \
	XX(119, MIRROR_MOVE, "Mirror Move", 20) \
	XX(120, SELF_DESTRUCT, "Self-Destruct", 5) \
	XX(121, EGG_BOMB, "Egg Bomb", 10) \
	XX(122, LICK, "Lick", 30) \
	XX(123, SMOG, "Smog", 20) \
	XX(124, SLUDGE, "Sludge", 20) \
	XX(125, BONE_CLUB, "Bone Club", 20) \
	XX(126, FIRE_BLAST, "Fire Blast", 5) \
	XX(127, WATERFALL, "Waterfall", 15) \
	XX(128, CLAMP, "Clamp", 15) \
	XX(129, SWIFT, "Swift", 20) \
	XX(130, SKULL_BASH, "Skull Bash", 10) \
	XX(131, SPIKE_CANNON, "Spike Cannon", 15) \
	XX(132, CONSTRICT, "Constrict", 35) \
	XX(133, AMNESIA, "Amnesia", 20) \
	XX(134, KINESIS, "Kinesis", 15) \
	XX(135, SOFT_BOILED, "Soft-Boiled", 5) \
	XX(136, HIGH_JUMP_KICK, "High Jump Kick", 10) \
	XX(137, GLARE, "Glare", 30) \
	XX(138, DREAM_EATER, "Dream Eater", 15) \
	XX(139, POISON_GAS, "Poison Gas", 40) \
	XX(140, BARRAGE, "Barrage", 20) \
	XX(141, LEECH_LIFE, "Leech Life", 15) \
	XX(142, LOVELY_KISS, "Lovely Kiss", 10) \
	XX(143, SKY_ATTACK, "Sky Attack", 5) \
	XX(144, TRANSFORM, "Transform", 10) \
	XX(145, BUBBLE, "Bubble", 30) \
	XX(146, DIZZY_PUNCH, "Dizzy Punch", 10) \
	XX(147, SPORE, "Spore", 15) \
	XX(148, FLASH, "Flash", 20) \
	XX(149, PSYWAVE, "Psywave", 15) \
	XX(150, SPLASH, "Splash", 40) \
	XX(151, ACID_ARMOR, "Acid Armor", 20) \
	XX(152, CRABHAMMER, "Crabhammer", 10) \
	XX(153, EXPLOSION, "Explosion", 5) \
	XX(154, FURY_SWIPES, "Fury Swipes", 15) \
	XX(155, BONEMERANG, "Bonemerang", 10) \
	XX(156, REST, "Rest", 10) \
	XX(157, ROCK_SLIDE, "Rock Slide", 10) \
	XX(158, HYPER_FANG, "Hyper Fang", 15) \
	XX(159, SHARPEN, "Sharpen", 30) \
	XX(160, CONVERSION, "Conversion", 30) \
	XX(161, TRI_ATTACK, "Tri Attack", 10) \
	XX(162, SUPER_FANG, "Super Fang", 10) \
	XX(163, SLASH, "Slash", 20) \
	XX(164, SUBSTITUTE, "Substitute", 10) \
	XX(165, STRUGGLE, "Struggle", 1) \
	XX(166, SKETCH, "Sketch", 1) \
	XX(167, TRIPLE_KICK, "Triple Kick", 10) \
	XX(168, THIEF, "Thief", 25) \
	XX(169, SPIDER_WEB, "Spider Web", 10) \
	XX(170, MIND_READER, "Mind Reader", 5) \
	XX(171, NIGHTMARE, "Nightmare", 15) \
	XX(172, FLAME_WHEEL, "Flame Wheel", 25) \
	XX(173, SNORE, "Snore", 15) \
	XX(174, CURSE, "Curse", 10) \
	XX(175, FLAIL, "Flail", 15) \
	XX(176, CONVERSION_2, "Conversion 2", 30) \
	XX(177, AEROBLAST, "Aeroblast", 5) \
	XX(178, COTTON_SPORE, "Cotton Spore", 40) \
	XX(179, REVERSAL, "Reversal", 15) \
	XX(180, SPITE, "Spite", 10) \
	XX(181, POWDER_SNOW, "Powder Snow", 25) \
	XX(182, PROTECT, "Protect", 10) \
	XX(183, MACH_PUNCH, "Mach Punch", 30) \
	XX(184, SCARY_FACE, "Scary Face", 10) \
	XX(185, FEINT_ATTACK, "Feint Attack", 20) \
	XX(186, SWEET_KISS, "Sweet Kiss", 10) \
	XX(187, BELLY_DRUM, "Belly Drum", 10) \
	XX(188, SLUDGE_BOMB, "Sludge Bomb", 10) \
	XX(189, MUD_SLAP, "Mud-Slap", 10) \
	XX(190, OCTAZOOKA, "Octazooka", 10) \
	XX(191, SPIKES, "Spikes", 20) \
	XX(192, ZAP_CANNON, "Zap Cannon", 5) \
	XX(193, FORESIGHT, "Foresight", 40) \
	XX(194, DESTINY_BOND, "Destiny Bond", 5) \
	XX(195, PERISH_SONG, "Perish Song", 5) \
	XX(196, ICY_WIND, "Icy Wind", 15) \
	XX(197, DETECT, "Detect", 5) \
	XX(198, BONE_RUSH, "Bone Rush", 10) \
	XX(199, LOCK_ON, "Lock-On", 5) \
	XX(200, OUTRAGE, "Outrage", 10) \
	XX(201, SANDSTORM, "Sandstorm", 10) \
	XX(202, GIGA_DRAIN, "Giga Drain", 10) \
	XX(203, ENDURE, "Endure", 10) \
	XX(204, CHARM, "Charm", 20) \
	XX(205, ROLLOUT, "Rollout", 20) \
	XX(206, FALSE_SWIPE, "False Swipe", 40) \
	XX(207, SWAGGER, "Swagger", 15) \
	XX(208, MILK_DRINK, "Milk Drink", 5) \
	XX(209, SPARK, "Spark", 20) \
	XX(210, FURY_CUTTER, "Fury Cutter", 20) \
	XX(211, STEEL_WING, "Steel Wing", 25) \
	XX(212, MEAN_LOOK, "Mean Look", 5) \
	XX(213, ATTRACT, "Attract", 15) \
	XX(214, SLEEP_TALK, "Sleep Talk", 10) \
	XX(215, HEAL_BELL, "Heal Bell", 5) \
	XX(216, RETURN, "Return", 20) \
	XX(217, PRESENT, "Present", 15) \
	XX(218, FRUSTRATION, "Frustration", 20) \
	XX(219, SAFEGUARD, "Safeguard", 25) \
	XX(220, PAIN_SPLIT, "Pain Split", 20) \
	XX(221, SACRED_FIRE, "Sacred Fire", 5) \
	XX(222, MAGNITUDE, "Magnitude", 30) \
	XX(223, DYNAMIC_PUNCH, "Dynamic Punch", 5) \
	XX(224, MEGAHORN, "Megahorn", 10) \
	XX(225, DRAGON_BREATH, "Dragon Breath", 20) \
	XX(226, BATON_PASS, "Baton Pass", 40) \
	XX(227, ENCORE, "Encore", 5) \
	XX(228, PURSUIT, "Pursuit", 20) \
	XX(229, RAPID_SPIN, "Rapid Spin", 40) \
	XX(230, SWEET_SCENT, "Sweet Scent", 20) \
	XX(231, IRON_TAIL, "Iron Tail", 15) \
	XX(232, METAL_CLAW, "Metal Claw", 35) \
	XX(233, VITAL_THROW, "Vital Throw", 10) \
	XX(234, MORNING_SUN, "Morning Sun", 5) \
	XX(235, SYNTHESIS, "Synthesis", 5) \
	XX(236, MOONLIGHT, "Moonlight", 5) \
	XX(237, HIDDEN_POWER, "Hidden Power", 15) \
	XX(238, CROSS_CHOP, "Cross Chop", 5) \
	XX(239, TWISTER, "Twister", 20) \
	XX(240, RAIN_DANCE, "Rain Dance", 5) \
	XX(241, SUNNY_DAY, "Sunny Day", 5) \
	XX(242, CRUNCH, "Crunch", 15) \
	XX(243, MIRROR_COAT, "Mirror Coat", 20) \
	XX(244, PSYCH_UP, "Psych Up", 10) \
	XX(245, EXTREME_SPEED, "Extreme Speed", 5) \
	XX(246, ANCIENT_POWER, "Ancient Power", 5) \
	XX(247, SHADOW_BALL, "Shadow Ball", 15) \
	XX(248, FUTURE_SIGHT, "Future Sight", 10) \
	XX(249, ROCK_SMASH, "Rock Smash", 15) \
	XX(250, WHIRLPOOL, "Whirlpool", 15) \
	XX(251, BEAT_UP, "Beat Up", 10) \
	XX(252, FAKE_OUT, "Fake Out", 10) \
	XX(253, UPROAR, "Uproar", 10) \
	XX(254, STOCKPILE, "Stockpile", 20) \
	XX(255, SPIT_UP, "Spit Up", 10) \
	XX(256, SWALLOW, "Swallow", 10) \
	XX(257, HEAT_WAVE, "Heat Wave", 10) \
	XX(258, HAIL, "Hail", 10) \
	XX(259, TORMENT, "Torment", 15) \
	XX(260, FLATTER, "Flatter", 15) \
	XX(261, WILL_O_WISP, "Will-O-Wisp", 15) \
	XX(262, MEMENTO, "Memento", 10) \
	XX(263, FACADE, "Facade", 20) \
	XX(264, FOCUS_PUNCH, "Focus Punch", 20) \
	XX(265, SMELLING_SALTS, "Smelling Salts", 10) \
	XX(266, FOLLOW_ME, "Follow Me", 20) \
	XX(267, NATURE_POWER, "Nature Power", 20) \
	XX(268, CHARGE, "Charge", 20) \
	XX(269, TAUNT, "Taunt", 20) \
	XX(270, HELPING_HAND, "Helping Hand", 20) \
	XX(271, TRICK, "Trick", 10) \
	XX(272, ROLE_PLAY, "Role Play", 10) \
	XX(273, WISH, "Wish", 10) \
	XX(274, ASSIST, "Assist", 20) \
	XX(275, INGRAIN, "Ingrain", 20) \
	XX(276, SUPERPOWER, "Superpower", 5) \
	XX(277, MAGIC_COAT, "Magic Coat", 15) \
	XX(278, RECYCLE, "Recycle", 10) \
	XX(279, REVENGE, "Revenge", 10) \
	XX(280, BRICK_BREAK, "Brick Break", 15) \
	XX(281, YAWN, "Yawn", 10) \
	XX(282, KNOCK_OFF, "Knock Off", 20) \
	XX(283, ENDEAVOR, "Endeavor", 5) \
	XX(284, ERUPTION, "Eruption", 5) \
	XX(285, SKILL_SWAP, "Skill Swap", 10) \
	XX(286, IMPRISON, "Imprison", 10) \
	XX(287, REFRESH, "Refresh", 20) \
	XX(288, GRUDGE, "Grudge", 5) \
	XX(289, SNATCH, "Snatch", 10) \
	XX(290, SECRET_POWER, "Secret Power", 20) \
	XX(291, DIVE, "Dive", 10) \
	XX(292, ARM_THRUST, "Arm Thrust", 20) \
	XX(293, CAMOUFLAGE, "Camouflage", 20) \
	XX(294, TAIL_GLOW, "Tail Glow", 20) \
	XX(295, LUSTER_PURGE, "Luster Purge", 5) \
	XX(296, MIST_BALL, "Mist Ball", 5) \
	XX(297, FEATHER_DANCE, "Feather Dance", 15) \
	XX(298, TEETER_DANCE, "Teeter Dance", 20) \
	XX(299, BLAZE_KICK, "Blaze Kick", 10) \
	XX(300, MUD_SPORT, "Mud Sport", 15) \
	XX(301, ICE_BALL, "Ice Ball", 20) \
	XX(302, NEEDLE_ARM, "Needle Arm", 15) \
	XX(303, SLACK_OFF, "Slack Off", 5) \
	XX(304, HYPER_VOICE, "Hyper Voice", 10) \
	XX(305, POISON_FANG, "Poison Fang", 15) \
	XX(306, CRUSH_CLAW, "Crush Claw", 10) \
	XX(307, BLAST_BURN, "Blast Burn", 5) \
	XX(308, HYDRO_CANNON, "Hydro Cannon", 5) \
	XX(309, METEOR_MASH, "Meteor Mash", 10) \
	XX(310, ASTONISH, "Astonish", 15) \
	XX(311, WEATHER_BALL, "Weather Ball", 10) \
	XX(312, AROMATHERAPY, "Aromatherapy", 5) \
	XX(313, FAKE_TEARS, "Fake Tears", 20) \
	XX(314, AIR_CUTTER, "Air Cutter", 25) \
	XX(315, OVERHEAT, "Overheat", 5) \
	XX(316, ODOR_SLEUTH, "Odor Sleuth", 40) \
	XX(317, ROCK_TOMB, "Rock Tomb", 15) \
	XX(318, SILVER_WIND, "Silver Wind", 5) \
	XX(319, METAL_SOUND, "Metal Sound", 40) \
	XX(320, GRASS_WHISTLE, "Grass Whistle", 15) \
	XX(321, TICKLE, "Tickle", 20) \
	XX(322, COSMIC_POWER, "Cosmic Power", 20) \
	XX(323, WATER_SPOUT, "Water Spout", 5) \
	XX(324, SIGNAL_BEAM, "Signal Beam", 15) \
	XX(325, SHADOW_PUNCH, "Shadow Punch", 20) \
	XX(326, EXTRASENSORY, "Extrasensory", 20) \
	XX(327, SKY_UPPERCUT, "Sky Uppercut", 15) \
	XX(328, SAND_TOMB, "Sand Tomb", 15) \
	XX(329, SHEER_COLD, "Sheer Cold", 5) \
	XX(330, MUDDY_WATER, "Muddy Water", 10) \
	XX(331, BULLET_SEED, "Bullet Seed", 30) \
	XX(332, AERIAL_ACE, "Aerial Ace", 20) \
	XX(333, ICICLE_SPEAR, "Icicle Spear", 30) \
	XX(334, IRON_DEFENSE, "Iron Defense", 15) \
	XX(335, BLOCK, "Block", 5) \
	XX(336, HOWL, "Howl", 40) \
	XX(337, DRAGON_CLAW, "Dragon Claw", 15) \
	XX(338, FRENZY_PLANT, "Frenzy Plant", 5) \
	XX(339, BULK_UP, "Bulk Up", 20) \
	XX(340, BOUNCE, "Bounce", 5) \
	XX(341, MUD_SHOT, "Mud Shot", 15) \
	XX(342, POISON_TAIL, "Poison Tail", 25) \
	XX(343, COVET, "Covet", 25) \
	XX(344, VOLT_TACKLE, "Volt Tackle", 15) \
	XX(345, MAGICAL_LEAF, "Magical Leaf", 20) \
	XX(346, WATER_SPORT, "Water Sport", 15) \
	XX(347, CALM_MIND, "Calm Mind", 20) \
	XX(348, LEAF_BLADE, "Leaf Blade", 15) \
	XX(349, DRAGON_DANCE, "Dragon Dance", 20) \
	XX(350, ROCK_BLAST, "Rock Blast", 10) \
	XX(351, SHOCK_WAVE, "Shock Wave", 20) \
	XX(352, WATER_PULSE, "Water Pulse", 20) \
	XX(353, DOOM_DESIRE, "Doom Desire", 5) \
	XX(354, PSYCHO_BOOST, "Psycho Boost", 5)

enum {
#define XX(id, token, name, pp) token = (uint16_t)id,
MOVES(XX)
#undef XX
};
struct { int16_t id; char const *name; int8_t pp; } const moves[] = {
#define XX(id, token, name, pp) { id, name, pp },
{ 0, "--", 0},
MOVES(XX)
#undef XX
};

#define NATURES(XX) \
	XX(0, HARDY) \
	XX(1, LONELY) \
	XX(2, BRAVE) \
	XX(3, ADAMANT) \
	XX(4, NAUGHTY) \
	XX(5, BOLD) \
	XX(6, DOCILE) \
	XX(7, RELAXED) \
	XX(8, IMPISH) \
	XX(9, LAX) \
	XX(10, TIMID) \
	XX(11, HASTY) \
	XX(12, SERIOUS) \
	XX(13, JOLLY) \
	XX(14, NAIVE) \
	XX(15, MODEST) \
	XX(16, MILD) \
	XX(17, QUIET) \
	XX(18, BASHFUL) \
	XX(19, RASH) \
	XX(20, CALM) \
	XX(21, GENTLE) \
	XX(22, SASSY) \
	XX(23, CAREFUL) \
	XX(24, QUIRKY)
enum {
#define XX(id, token) token = (uint32_t)id,
NATURES(XX)
#undef XX
};
struct { uint32_t id; char const *name; } const natures[] = {
#define XX(id, token) { (stat_nature_t)id, #token },
NATURES(XX)
#undef XX
};

/*
https://bulbapedia.bulbagarden.net/wiki/List_of_items_by_index_number_(Generation_III)
var table = document.querySelector("table table");
var rows = Array.from(table.querySelectorAll("tr")).slice(1);
rows.map(function(row) {
	var cols = row.querySelectorAll("td");
	var id = Number(cols[0].textContent);
	var name = cols[3].textContent.replace(/^\s+|\*?\s+$/g, "").replace(/'/g, "’");
	var token = name.toUpperCase().replace(/[. -]+/g, "_").replace(/['’]/g, "").replace(/É/g, "E");
	if("UNKNOWN" == token) token = token+"_"+id;
	return "\tXX("+id+", "+token+", \""+name+"\")";
}).join(" \\\n")+"\n";
*/
#define ITEMS(XX) \
	XX(0, NOTHING, "Nothing") \
	XX(1, MASTER_BALL, "Master Ball") \
	XX(2, ULTRA_BALL, "Ultra Ball") \
	XX(3, GREAT_BALL, "Great Ball") \
	XX(4, POKE_BALL, "Poké Ball") \
	XX(5, SAFARI_BALL, "Safari Ball") \
	XX(6, NET_BALL, "Net Ball") \
	XX(7, DIVE_BALL, "Dive Ball") \
	XX(8, NEST_BALL, "Nest Ball") \
	XX(9, REPEAT_BALL, "Repeat Ball") \
	XX(10, TIMER_BALL, "Timer Ball") \
	XX(11, LUXURY_BALL, "Luxury Ball") \
	XX(12, PREMIER_BALL, "Premier Ball") \
	XX(13, POTION, "Potion") \
	XX(14, ANTIDOTE, "Antidote") \
	XX(15, BURN_HEAL, "Burn Heal") \
	XX(16, ICE_HEAL, "Ice Heal") \
	XX(17, AWAKENING, "Awakening") \
	XX(18, PARLYZ_HEAL, "Parlyz Heal") \
	XX(19, FULL_RESTORE, "Full Restore") \
	XX(20, MAX_POTION, "Max Potion") \
	XX(21, HYPER_POTION, "Hyper Potion") \
	XX(22, SUPER_POTION, "Super Potion") \
	XX(23, FULL_HEAL, "Full Heal") \
	XX(24, REVIVE, "Revive") \
	XX(25, MAX_REVIVE, "Max Revive") \
	XX(26, FRESH_WATER, "Fresh Water") \
	XX(27, SODA_POP, "Soda Pop") \
	XX(28, LEMONADE, "Lemonade") \
	XX(29, MOOMOO_MILK, "Moomoo Milk") \
	XX(30, ENERGYPOWDER, "EnergyPowder") \
	XX(31, ENERGY_ROOT, "Energy Root") \
	XX(32, HEAL_POWDER, "Heal Powder") \
	XX(33, REVIVAL_HERB, "Revival Herb") \
	XX(34, ETHER, "Ether") \
	XX(35, MAX_ETHER, "Max Ether") \
	XX(36, ELIXIR, "Elixir") \
	XX(37, MAX_ELIXIR, "Max Elixir") \
	XX(38, LAVA_COOKIE, "Lava Cookie") \
	XX(39, BLUE_FLUTE, "Blue Flute") \
	XX(40, YELLOW_FLUTE, "Yellow Flute") \
	XX(41, RED_FLUTE, "Red Flute") \
	XX(42, BLACK_FLUTE, "Black Flute") \
	XX(43, WHITE_FLUTE, "White Flute") \
	XX(44, BERRY_JUICE, "Berry Juice") \
	XX(45, SACRED_ASH, "Sacred Ash") \
	XX(46, SHOAL_SALT, "Shoal Salt") \
	XX(47, SHOAL_SHELL, "Shoal Shell") \
	XX(48, RED_SHARD, "Red Shard") \
	XX(49, BLUE_SHARD, "Blue Shard") \
	XX(50, YELLOW_SHARD, "Yellow Shard") \
	XX(51, GREEN_SHARD, "Green Shard") \
	XX(52, UNKNOWN_52, "unknown") \
	XX(53, UNKNOWN_53, "unknown") \
	XX(54, UNKNOWN_54, "unknown") \
	XX(55, UNKNOWN_55, "unknown") \
	XX(56, UNKNOWN_56, "unknown") \
	XX(57, UNKNOWN_57, "unknown") \
	XX(58, UNKNOWN_58, "unknown") \
	XX(59, UNKNOWN_59, "unknown") \
	XX(60, UNKNOWN_60, "unknown") \
	XX(61, UNKNOWN_61, "unknown") \
	XX(62, UNKNOWN_62, "unknown") \
	XX(63, HP_UP, "HP Up") \
	XX(64, PROTEIN, "Protein") \
	XX(65, IRON, "Iron") \
	XX(66, CARBOS, "Carbos") \
	XX(67, CALCIUM, "Calcium") \
	XX(68, RARE_CANDY, "Rare Candy") \
	XX(69, PP_UP, "PP Up") \
	XX(70, ZINC, "Zinc") \
	XX(71, PP_MAX, "PP Max") \
	XX(72, UNKNOWN_72, "unknown") \
	XX(73, GUARD_SPEC_, "Guard Spec.") \
	XX(74, DIRE_HIT, "Dire Hit") \
	XX(75, X_ATTACK, "X Attack") \
	XX(76, X_DEFEND, "X Defend") \
	XX(77, X_SPEED, "X Speed") \
	XX(78, X_ACCURACY, "X Accuracy") \
	XX(79, X_SPECIAL, "X Special") \
	XX(80, POKE_DOLL, "Poké Doll") \
	XX(81, FLUFFY_TAIL, "Fluffy Tail") \
	XX(82, UNKNOWN_82, "unknown") \
	XX(83, SUPER_REPEL, "Super Repel") \
	XX(84, MAX_REPEL, "Max Repel") \
	XX(85, ESCAPE_ROPE, "Escape Rope") \
	XX(86, REPEL, "Repel") \
	XX(87, UNKNOWN_87, "unknown") \
	XX(88, UNKNOWN_88, "unknown") \
	XX(89, UNKNOWN_89, "unknown") \
	XX(90, UNKNOWN_90, "unknown") \
	XX(91, UNKNOWN_91, "unknown") \
	XX(92, UNKNOWN_92, "unknown") \
	XX(93, SUN_STONE, "Sun Stone") \
	XX(94, MOON_STONE, "Moon Stone") \
	XX(95, FIRE_STONE, "Fire Stone") \
	XX(96, THUNDERSTONE, "Thunderstone") \
	XX(97, WATER_STONE, "Water Stone") \
	XX(98, LEAF_STONE, "Leaf Stone") \
	XX(99, UNKNOWN_99, "unknown") \
	XX(100, UNKNOWN_100, "unknown") \
	XX(101, UNKNOWN_101, "unknown") \
	XX(102, UNKNOWN_102, "unknown") \
	XX(103, TINYMUSHROOM, "TinyMushroom") \
	XX(104, BIG_MUSHROOM, "Big Mushroom") \
	XX(105, UNKNOWN_105, "unknown") \
	XX(106, PEARL, "Pearl") \
	XX(107, BIG_PEARL, "Big Pearl") \
	XX(108, STARDUST, "Stardust") \
	XX(109, STAR_PIECE, "Star Piece") \
	XX(110, NUGGET, "Nugget") \
	XX(111, HEART_SCALE, "Heart Scale") \
	XX(112, UNKNOWN_112, "unknown") \
	XX(113, UNKNOWN_113, "unknown") \
	XX(114, UNKNOWN_114, "unknown") \
	XX(115, UNKNOWN_115, "unknown") \
	XX(116, UNKNOWN_116, "unknown") \
	XX(117, UNKNOWN_117, "unknown") \
	XX(118, UNKNOWN_118, "unknown") \
	XX(119, UNKNOWN_119, "unknown") \
	XX(120, UNKNOWN_120, "unknown") \
	XX(121, ORANGE_MAIL, "Orange Mail") \
	XX(122, HARBOR_MAIL, "Harbor Mail") \
	XX(123, GLITTER_MAIL, "Glitter Mail") \
	XX(124, MECH_MAIL, "Mech Mail") \
	XX(125, WOOD_MAIL, "Wood Mail") \
	XX(126, WAVE_MAIL, "Wave Mail") \
	XX(127, BEAD_MAIL, "Bead Mail") \
	XX(128, SHADOW_MAIL, "Shadow Mail") \
	XX(129, TROPIC_MAIL, "Tropic Mail") \
	XX(130, DREAM_MAIL, "Dream Mail") \
	XX(131, FAB_MAIL, "Fab Mail") \
	XX(132, RETRO_MAIL, "Retro Mail") \
	XX(133, CHERI_BERRY, "Cheri Berry") \
	XX(134, CHESTO_BERRY, "Chesto Berry") \
	XX(135, PECHA_BERRY, "Pecha Berry") \
	XX(136, RAWST_BERRY, "Rawst Berry") \
	XX(137, ASPEAR_BERRY, "Aspear Berry") \
	XX(138, LEPPA_BERRY, "Leppa Berry") \
	XX(139, ORAN_BERRY, "Oran Berry") \
	XX(140, PERSIM_BERRY, "Persim Berry") \
	XX(141, LUM_BERRY, "Lum Berry") \
	XX(142, SITRUS_BERRY, "Sitrus Berry") \
	XX(143, FIGY_BERRY, "Figy Berry") \
	XX(144, WIKI_BERRY, "Wiki Berry") \
	XX(145, MAGO_BERRY, "Mago Berry") \
	XX(146, AGUAV_BERRY, "Aguav Berry") \
	XX(147, IAPAPA_BERRY, "Iapapa Berry") \
	XX(148, RAZZ_BERRY, "Razz Berry") \
	XX(149, BLUK_BERRY, "Bluk Berry") \
	XX(150, NANAB_BERRY, "Nanab Berry") \
	XX(151, WEPEAR_BERRY, "Wepear Berry") \
	XX(152, PINAP_BERRY, "Pinap Berry") \
	XX(153, POMEG_BERRY, "Pomeg Berry") \
	XX(154, KELPSY_BERRY, "Kelpsy Berry") \
	XX(155, QUALOT_BERRY, "Qualot Berry") \
	XX(156, HONDEW_BERRY, "Hondew Berry") \
	XX(157, GREPA_BERRY, "Grepa Berry") \
	XX(158, TAMATO_BERRY, "Tamato Berry") \
	XX(159, CORNN_BERRY, "Cornn Berry") \
	XX(160, MAGOST_BERRY, "Magost Berry") \
	XX(161, RABUTA_BERRY, "Rabuta Berry") \
	XX(162, NOMEL_BERRY, "Nomel Berry") \
	XX(163, SPELON_BERRY, "Spelon Berry") \
	XX(164, PAMTRE_BERRY, "Pamtre Berry") \
	XX(165, WATMEL_BERRY, "Watmel Berry") \
	XX(166, DURIN_BERRY, "Durin Berry") \
	XX(167, BELUE_BERRY, "Belue Berry") \
	XX(168, LIECHI_BERRY, "Liechi Berry") \
	XX(169, GANLON_BERRY, "Ganlon Berry") \
	XX(170, SALAC_BERRY, "Salac Berry") \
	XX(171, PETAYA_BERRY, "Petaya Berry") \
	XX(172, APICOT_BERRY, "Apicot Berry") \
	XX(173, LANSAT_BERRY, "Lansat Berry") \
	XX(174, STARF_BERRY, "Starf Berry") \
	XX(175, ENIGMA_BERRY, "Enigma Berry") \
	XX(176, UNKNOWN_176, "unknown") \
	XX(177, UNKNOWN_177, "unknown") \
	XX(178, UNKNOWN_178, "unknown") \
	XX(179, BRIGHTPOWDER, "BrightPowder") \
	XX(180, WHITE_HERB, "White Herb") \
	XX(181, MACHO_BRACE, "Macho Brace") \
	XX(182, EXP_SHARE, "Exp. Share") \
	XX(183, QUICK_CLAW, "Quick Claw") \
	XX(184, SOOTHE_BELL, "Soothe Bell") \
	XX(185, MENTAL_HERB, "Mental Herb") \
	XX(186, CHOICE_BAND, "Choice Band") \
	XX(187, KINGS_ROCK, "King’s Rock") \
	XX(188, SILVERPOWDER, "SilverPowder") \
	XX(189, AMULET_COIN, "Amulet Coin") \
	XX(190, CLEANSE_TAG, "Cleanse Tag") \
	XX(191, SOUL_DEW, "Soul Dew") \
	XX(192, DEEPSEATOOTH, "DeepSeaTooth") \
	XX(193, DEEPSEASCALE, "DeepSeaScale") \
	XX(194, SMOKE_BALL, "Smoke Ball") \
	XX(195, EVERSTONE, "Everstone") \
	XX(196, FOCUS_BAND, "Focus Band") \
	XX(197, LUCKY_EGG, "Lucky Egg") \
	XX(198, SCOPE_LENS, "Scope Lens") \
	XX(199, METAL_COAT, "Metal Coat") \
	XX(200, LEFTOVERS, "Leftovers") \
	XX(201, DRAGON_SCALE, "Dragon Scale") \
	XX(202, LIGHT_BALL, "Light Ball") \
	XX(203, SOFT_SAND, "Soft Sand") \
	XX(204, HARD_STONE, "Hard Stone") \
	XX(205, MIRACLE_SEED, "Miracle Seed") \
	XX(206, BLACKGLASSES, "BlackGlasses") \
	XX(207, BLACK_BELT, "Black Belt") \
	XX(208, MAGNET, "Magnet") \
	XX(209, MYSTIC_WATER, "Mystic Water") \
	XX(210, SHARP_BEAK, "Sharp Beak") \
	XX(211, POISON_BARB, "Poison Barb") \
	XX(212, NEVERMELTICE, "NeverMeltIce") \
	XX(213, SPELL_TAG, "Spell Tag") \
	XX(214, TWISTEDSPOON, "TwistedSpoon") \
	XX(215, CHARCOAL, "Charcoal") \
	XX(216, DRAGON_FANG, "Dragon Fang") \
	XX(217, SILK_SCARF, "Silk Scarf") \
	XX(218, UP_GRADE, "Up-Grade") \
	XX(219, SHELL_BELL, "Shell Bell") \
	XX(220, SEA_INCENSE, "Sea Incense") \
	XX(221, LAX_INCENSE, "Lax Incense") \
	XX(222, LUCKY_PUNCH, "Lucky Punch") \
	XX(223, METAL_POWDER, "Metal Powder") \
	XX(224, THICK_CLUB, "Thick Club") \
	XX(225, STICK, "Stick") \
	XX(226, UNKNOWN_226, "unknown") \
	XX(227, UNKNOWN_227, "unknown") \
	XX(228, UNKNOWN_228, "unknown") \
	XX(229, UNKNOWN_229, "unknown") \
	XX(230, UNKNOWN_230, "unknown") \
	XX(231, UNKNOWN_231, "unknown") \
	XX(232, UNKNOWN_232, "unknown") \
	XX(233, UNKNOWN_233, "unknown") \
	XX(234, UNKNOWN_234, "unknown") \
	XX(235, UNKNOWN_235, "unknown") \
	XX(236, UNKNOWN_236, "unknown") \
	XX(237, UNKNOWN_237, "unknown") \
	XX(238, UNKNOWN_238, "unknown") \
	XX(239, UNKNOWN_239, "unknown") \
	XX(240, UNKNOWN_240, "unknown") \
	XX(241, UNKNOWN_241, "unknown") \
	XX(242, UNKNOWN_242, "unknown") \
	XX(243, UNKNOWN_243, "unknown") \
	XX(244, UNKNOWN_244, "unknown") \
	XX(245, UNKNOWN_245, "unknown") \
	XX(246, UNKNOWN_246, "unknown") \
	XX(247, UNKNOWN_247, "unknown") \
	XX(248, UNKNOWN_248, "unknown") \
	XX(249, UNKNOWN_249, "unknown") \
	XX(250, UNKNOWN_250, "unknown") \
	XX(251, UNKNOWN_251, "unknown") \
	XX(252, UNKNOWN_252, "unknown") \
	XX(253, UNKNOWN_253, "unknown") \
	XX(254, RED_SCARF, "Red Scarf") \
	XX(255, BLUE_SCARF, "Blue Scarf") \
	XX(256, PINK_SCARF, "Pink Scarf") \
	XX(257, GREEN_SCARF, "Green Scarf") \
	XX(258, YELLOW_SCARF, "Yellow Scarf") \
	XX(259, MACH_BIKE, "Mach Bike") \
	XX(260, COIN_CASE, "Coin Case") \
	XX(261, ITEMFINDER, "Itemfinder") \
	XX(262, OLD_ROD, "Old Rod") \
	XX(263, GOOD_ROD, "Good Rod") \
	XX(264, SUPER_ROD, "Super Rod") \
	XX(265, S_S_TICKET, "S.S. Ticket") \
	XX(266, CONTEST_PASS, "Contest Pass") \
	XX(267, UNKNOWN_267, "unknown") \
	XX(268, WAILMER_PAIL, "Wailmer Pail") \
	XX(269, DEVON_GOODS, "Devon Goods") \
	XX(270, SOOT_SACK, "Soot Sack") \
	XX(271, BASEMENT_KEY, "Basement Key") \
	XX(272, ACRO_BIKE, "Acro Bike") \
	XX(273, POKEBLOCK_CASE, "Pokéblock Case") \
	XX(274, LETTER, "Letter") \
	XX(275, EON_TICKET, "Eon Ticket") \
	XX(276, RED_ORB, "Red Orb") \
	XX(277, BLUE_ORB, "Blue Orb") \
	XX(278, SCANNER, "Scanner") \
	XX(279, GO_GOGGLES, "Go-Goggles") \
	XX(280, METEORITE, "Meteorite") \
	XX(281, RM_1_KEY, "Rm. 1 Key") \
	XX(282, RM_2_KEY, "Rm. 2 Key") \
	XX(283, RM_4_KEY, "Rm. 4 Key") \
	XX(284, RM_6_KEY, "Rm. 6 Key") \
	XX(285, STORAGE_KEY, "Storage Key") \
	XX(286, ROOT_FOSSIL, "Root Fossil") \
	XX(287, CLAW_FOSSIL, "Claw Fossil") \
	XX(288, DEVON_SCOPE, "Devon Scope") \
	XX(289, TM01, "TM01") \
	XX(290, TM02, "TM02") \
	XX(291, TM03, "TM03") \
	XX(292, TM04, "TM04") \
	XX(293, TM05, "TM05") \
	XX(294, TM06, "TM06") \
	XX(295, TM07, "TM07") \
	XX(296, TM08, "TM08") \
	XX(297, TM09, "TM09") \
	XX(298, TM10, "TM10") \
	XX(299, TM11, "TM11") \
	XX(300, TM12, "TM12") \
	XX(301, TM13, "TM13") \
	XX(302, TM14, "TM14") \
	XX(303, TM15, "TM15") \
	XX(304, TM16, "TM16") \
	XX(305, TM17, "TM17") \
	XX(306, TM18, "TM18") \
	XX(307, TM19, "TM19") \
	XX(308, TM20, "TM20") \
	XX(309, TM21, "TM21") \
	XX(310, TM22, "TM22") \
	XX(311, TM23, "TM23") \
	XX(312, TM24, "TM24") \
	XX(313, TM25, "TM25") \
	XX(314, TM26, "TM26") \
	XX(315, TM27, "TM27") \
	XX(316, TM28, "TM28") \
	XX(317, TM29, "TM29") \
	XX(318, TM30, "TM30") \
	XX(319, TM31, "TM31") \
	XX(320, TM32, "TM32") \
	XX(321, TM33, "TM33") \
	XX(322, TM34, "TM34") \
	XX(323, TM35, "TM35") \
	XX(324, TM36, "TM36") \
	XX(325, TM37, "TM37") \
	XX(326, TM38, "TM38") \
	XX(327, TM39, "TM39") \
	XX(328, TM40, "TM40") \
	XX(329, TM41, "TM41") \
	XX(330, TM42, "TM42") \
	XX(331, TM43, "TM43") \
	XX(332, TM44, "TM44") \
	XX(333, TM45, "TM45") \
	XX(334, TM46, "TM46") \
	XX(335, TM47, "TM47") \
	XX(336, TM48, "TM48") \
	XX(337, TM49, "TM49") \
	XX(338, TM50, "TM50") \
	XX(339, HM01, "HM01") \
	XX(340, HM02, "HM02") \
	XX(341, HM03, "HM03") \
	XX(342, HM04, "HM04") \
	XX(343, HM05, "HM05") \
	XX(344, HM06, "HM06") \
	XX(345, HM07, "HM07") \
	XX(346, HM08, "HM08") \
	XX(347, UNKNOWN_347, "unknown") \
	XX(348, UNKNOWN_348, "unknown") \
	XX(349, OAKS_PARCEL, "Oak’s Parcel") \
	XX(350, POKE_FLUTE, "Poké Flute") \
	XX(351, SECRET_KEY, "Secret Key") \
	XX(352, BIKE_VOUCHER, "Bike Voucher") \
	XX(353, GOLD_TEETH, "Gold Teeth") \
	XX(354, OLD_AMBER, "Old Amber") \
	XX(355, CARD_KEY, "Card Key") \
	XX(356, LIFT_KEY, "Lift Key") \
	XX(357, HELIX_FOSSIL, "Helix Fossil") \
	XX(358, DOME_FOSSIL, "Dome Fossil") \
	XX(359, SILPH_SCOPE, "Silph Scope") \
	XX(360, BICYCLE, "Bicycle") \
	XX(361, TOWN_MAP, "Town Map") \
	XX(362, VS_SEEKER, "VS Seeker") \
	XX(363, FAME_CHECKER, "Fame Checker") \
	XX(364, TM_CASE, "TM Case") \
	XX(365, BERRY_POUCH, "Berry Pouch") \
	XX(366, TEACHY_TV, "Teachy TV") \
	XX(367, TRI_PASS, "Tri-Pass") \
	XX(368, RAINBOW_PASS, "Rainbow Pass") \
	XX(369, TEA, "Tea") \
	XX(370, MYSTICTICKET, "MysticTicket") \
	XX(371, AURORATICKET, "AuroraTicket") \
	XX(372, POWDER_JAR, "Powder Jar") \
	XX(373, RUBY, "Ruby") \
	XX(374, SAPPHIRE, "Sapphire") \
	XX(375, MAGMA_EMBLEM, "Magma Emblem") \
	XX(376, OLD_SEA_MAP, "Old Sea Map")
enum {
#define XX(id, token, name) token = (uint16_t)id,
ITEMS(XX)
#undef XX
};
struct { uint16_t id; char const *name; } const items[] = {
#define XX(id, token, name) { id, name },
ITEMS(XX)
#undef XX
};

/*
// https://bulbapedia.bulbagarden.net/wiki/List_of_locations_by_index_number_(Generation_III)
var table = document.querySelector("table");
Array.from(table.querySelectorAll("small, sup")).map(function(small) { small.remove(); });
Array.from(table.querySelectorAll("br")).map(function(br) { br.replaceWith(document.createTextNode("/")); });
var rows = Array.from(table.querySelectorAll("tr")).slice(1);
rows.map(function(row) {
	var cols = row.querySelectorAll("td");
	var id = Number(cols[0].textContent);
	var name = cols[2].textContent.replace(/^\s+|\*?\s+$/g, "").replace(/'/g, "’").replace(/ \/ /g, "/");
	if("" == name) return null;
	var token = name.toUpperCase().replace(/\.$/g, "").replace(/[. /-]+/g, "_").replace(/['’]/g, "").replace(/É/g, "E");
	var dups = { "UNDERWATER":1, "FIERY_PATH":1, "JAGGED_PASS":1, "METEOR_FALLS":1, "ROUTE_4":1, "ROUTE_10":1, "UNDERGROUND_PATH":1, "VICTORY_ROAD":1, "SAFARI_ZONE":1, "TRAINER_TOWER":1, "BIRTH_ISLAND":1, "ALTERING_CAVE":1, "NAVEL_ROCK":1 };
	if(dups[token] == 1) token = token+"_"+id;
	return "\tXX("+id+", "+token+", \""+name+"\")";
}).filter(function(line) { return !!line; }).join(" \\\n")+"\n";
*/
#define LOCATIONS(XX) \
	XX(0, LITTLEROOT_TOWN, "Littleroot Town") \
	XX(1, OLDALE_TOWN, "Oldale Town") \
	XX(2, DEWFORD_TOWN, "Dewford Town") \
	XX(3, LAVARIDGE_TOWN, "Lavaridge Town") \
	XX(4, FALLARBOR_TOWN, "Fallarbor Town") \
	XX(5, VERDANTURF_TOWN, "Verdanturf Town") \
	XX(6, PACIFIDLOG_TOWN, "Pacifidlog Town") \
	XX(7, PETALBURG_CITY, "Petalburg City") \
	XX(8, SLATEPORT_CITY, "Slateport City") \
	XX(9, MAUVILLE_CITY, "Mauville City") \
	XX(10, RUSTBORO_CITY, "Rustboro City") \
	XX(11, FORTREE_CITY, "Fortree City") \
	XX(12, LILYCOVE_CITY, "Lilycove City") \
	XX(13, MOSSDEEP_CITY, "Mossdeep City") \
	XX(14, SOOTOPOLIS_CITY, "Sootopolis City") \
	XX(15, EVER_GRANDE_CITY, "Ever Grande City") \
	XX(16, ROUTE_101, "Route 101") \
	XX(17, ROUTE_102, "Route 102") \
	XX(18, ROUTE_103, "Route 103") \
	XX(19, ROUTE_104, "Route 104") \
	XX(20, ROUTE_105, "Route 105") \
	XX(21, ROUTE_106, "Route 106") \
	XX(22, ROUTE_107, "Route 107") \
	XX(23, ROUTE_108, "Route 108") \
	XX(24, ROUTE_109, "Route 109") \
	XX(25, ROUTE_110, "Route 110") \
	XX(26, ROUTE_111, "Route 111") \
	XX(27, ROUTE_112, "Route 112") \
	XX(28, ROUTE_113, "Route 113") \
	XX(29, ROUTE_114, "Route 114") \
	XX(30, ROUTE_115, "Route 115") \
	XX(31, ROUTE_116, "Route 116") \
	XX(32, ROUTE_117, "Route 117") \
	XX(33, ROUTE_118, "Route 118") \
	XX(34, ROUTE_119, "Route 119") \
	XX(35, ROUTE_120, "Route 120") \
	XX(36, ROUTE_121, "Route 121") \
	XX(37, ROUTE_122, "Route 122") \
	XX(38, ROUTE_123, "Route 123") \
	XX(39, ROUTE_124, "Route 124") \
	XX(40, ROUTE_125, "Route 125") \
	XX(41, ROUTE_126, "Route 126") \
	XX(42, ROUTE_127, "Route 127") \
	XX(43, ROUTE_128, "Route 128") \
	XX(44, ROUTE_129, "Route 129") \
	XX(45, ROUTE_130, "Route 130") \
	XX(46, ROUTE_131, "Route 131") \
	XX(47, ROUTE_132, "Route 132") \
	XX(48, ROUTE_133, "Route 133") \
	XX(49, ROUTE_134, "Route 134") \
	XX(50, UNDERWATER_50, "Underwater") \
	XX(51, UNDERWATER_51, "Underwater") \
	XX(52, UNDERWATER_52, "Underwater") \
	XX(53, UNDERWATER_53, "Underwater") \
	XX(54, UNDERWATER_54, "Underwater") \
	XX(55, GRANITE_CAVE, "Granite Cave") \
	XX(56, MT_CHIMNEY, "Mt. Chimney") \
	XX(57, SAFARI_ZONE_57, "Safari Zone") \
	XX(58, BATTLE_TOWER_BATTLE_FRONTIER, "Battle Tower/Battle Frontier") \
	XX(59, PETALBURG_WOODS, "Petalburg Woods") \
	XX(60, RUSTURF_TUNNEL, "Rusturf Tunnel") \
	XX(61, ABANDONED_SHIP, "Abandoned Ship") \
	XX(62, NEW_MAUVILLE, "New Mauville") \
	XX(63, METEOR_FALLS_63, "Meteor Falls") \
	XX(64, METEOR_FALLS_64, "Meteor Falls") \
	XX(65, MT_PYRE, "Mt. Pyre") \
	XX(66, HIDEOUT, "Hideout") \
	XX(67, SHOAL_CAVE, "Shoal Cave") \
	XX(68, SEAFLOOR_CAVERN, "Seafloor Cavern") \
	XX(69, UNDERWATER_69, "Underwater") \
	XX(70, VICTORY_ROAD_70, "Victory Road") \
	XX(71, MIRAGE_ISLAND, "Mirage Island") \
	XX(72, CAVE_OF_ORIGIN, "Cave of Origin") \
	XX(73, SOUTHERN_ISLAND, "Southern Island") \
	XX(74, FIERY_PATH_74, "Fiery Path") \
	XX(75, FIERY_PATH_75, "Fiery Path") \
	XX(76, JAGGED_PASS_76, "Jagged Pass") \
	XX(77, JAGGED_PASS_77, "Jagged Pass") \
	XX(78, SEALED_CHAMBER, "Sealed Chamber") \
	XX(79, UNDERWATER_79, "Underwater") \
	XX(80, SCORCHED_SLAB, "Scorched Slab") \
	XX(81, ISLAND_CAVE, "Island Cave") \
	XX(82, DESERT_RUINS, "Desert Ruins") \
	XX(83, ANCIENT_TOMB, "Ancient Tomb") \
	XX(84, INSIDE_OF_TRUCK, "Inside of Truck") \
	XX(85, SKY_PILLAR, "Sky Pillar") \
	XX(86, SECRET_BASE, "Secret Base") \
	XX(87, FERRY, "Ferry") \
	\
	XX(88, PALLET_TOWN, "Pallet Town") \
	XX(89, VIRIDIAN_CITY, "Viridian City") \
	XX(90, PEWTER_CITY, "Pewter City") \
	XX(91, CERULEAN_CITY, "Cerulean City") \
	XX(92, LAVENDER_TOWN, "Lavender Town") \
	XX(93, VERMILION_CITY, "Vermilion City") \
	XX(94, CELADON_CITY, "Celadon City") \
	XX(95, FUCHSIA_CITY, "Fuchsia City") \
	XX(96, CINNABAR_ISLAND, "Cinnabar Island") \
	XX(97, INDIGO_PLATEAU, "Indigo Plateau") \
	XX(98, SAFFRON_CITY, "Saffron City") \
	XX(99, ROUTE_4_99, "Route 4") \
	XX(100, ROUTE_10_100, "Route 10") \
	XX(101, ROUTE_1, "Route 1") \
	XX(102, ROUTE_2, "Route 2") \
	XX(103, ROUTE_3, "Route 3") \
	XX(104, ROUTE_4_104, "Route 4") \
	XX(105, ROUTE_5, "Route 5") \
	XX(106, ROUTE_6, "Route 6") \
	XX(107, ROUTE_7, "Route 7") \
	XX(108, ROUTE_8, "Route 8") \
	XX(109, ROUTE_9, "Route 9") \
	XX(110, ROUTE_10_110, "Route 10") \
	XX(111, ROUTE_11, "Route 11") \
	XX(112, ROUTE_12, "Route 12") \
	XX(113, ROUTE_13, "Route 13") \
	XX(114, ROUTE_14, "Route 14") \
	XX(115, ROUTE_15, "Route 15") \
	XX(116, ROUTE_16, "Route 16") \
	XX(117, ROUTE_17, "Route 17") \
	XX(118, ROUTE_18, "Route 18") \
	XX(119, ROUTE_19, "Route 19") \
	XX(120, ROUTE_20, "Route 20") \
	XX(121, ROUTE_21, "Route 21") \
	XX(122, ROUTE_22, "Route 22") \
	XX(123, ROUTE_23, "Route 23") \
	XX(124, ROUTE_24, "Route 24") \
	XX(125, ROUTE_25, "Route 25") \
	XX(126, VIRIDIAN_FOREST, "Viridian Forest") \
	XX(127, MT_MOON, "Mt. Moon") \
	XX(128, S_S_ANNE, "S.S. Anne") \
	XX(129, UNDERGROUND_PATH_129, "Underground Path") \
	XX(130, UNDERGROUND_PATH_130, "Underground Path") \
	XX(131, DIGLETTS_CAVE, "Diglett’s Cave") \
	XX(132, VICTORY_ROAD_132, "Victory Road") \
	XX(133, ROCKET_HIDEOUT, "Rocket Hideout") \
	XX(134, SILPH_CO, "Silph Co.") \
	XX(135, POKEMON_MANSION, "Pokémon Mansion") \
	XX(136, SAFARI_ZONE_136, "Safari Zone") \
	XX(137, POKEMON_LEAGUE, "Pokémon League") \
	XX(138, ROCK_TUNNEL, "Rock Tunnel") \
	XX(139, SEAFOAM_ISLANDS, "Seafoam Islands") \
	XX(140, POKEMON_TOWER, "Pokémon Tower") \
	XX(141, CERULEAN_CAVE, "Cerulean Cave") \
	XX(142, POWER_PLANT, "Power Plant") \
	XX(143, ONE_ISLAND, "One Island") \
	XX(144, TWO_ISLAND, "Two Island") \
	XX(145, THREE_ISLAND, "Three Island") \
	XX(146, FOUR_ISLAND, "Four Island") \
	XX(147, FIVE_ISLAND, "Five Island") \
	XX(148, SEVEN_ISLAND, "Seven Island") \
	XX(149, SIX_ISLAND, "Six Island") \
	XX(150, KINDLE_ROAD, "Kindle Road") \
	XX(151, TREASURE_BEACH, "Treasure Beach") \
	XX(152, CAPE_BRINK, "Cape Brink") \
	XX(153, BOND_BRIDGE, "Bond Bridge") \
	XX(154, THREE_ISLE_PORT, "Three Isle Port") \
	XX(155, SEVII_ISLE_6, "Sevii Isle 6") \
	XX(156, SEVII_ISLE_7, "Sevii Isle 7") \
	XX(157, SEVII_ISLE_8, "Sevii Isle 8") \
	XX(158, SEVII_ISLE_9, "Sevii Isle 9") \
	XX(159, RESORT_GORGEOUS, "Resort Gorgeous") \
	XX(160, WATER_LABYRINTH, "Water Labyrinth") \
	XX(161, FIVE_ISLE_MEADOW, "Five Isle Meadow") \
	XX(162, MEMORIAL_PILLAR, "Memorial Pillar") \
	XX(163, OUTCAST_ISLAND, "Outcast Island") \
	XX(164, GREEN_PATH, "Green Path") \
	XX(165, WATER_PATH, "Water Path") \
	XX(166, RUIN_VALLEY, "Ruin Valley") \
	XX(167, TRAINER_TOWER_167, "Trainer Tower") \
	XX(168, CANYON_ENTRANCE, "Canyon Entrance") \
	XX(169, SEVAULT_CANYON, "Sevault Canyon") \
	XX(170, TANOBY_RUINS, "Tanoby Ruins") \
	XX(171, SEVII_ISLE_22, "Sevii Isle 22") \
	XX(172, SEVII_ISLE_23, "Sevii Isle 23") \
	XX(173, SEVII_ISLE_24, "Sevii Isle 24") \
	XX(174, NAVEL_ROCK_174, "Navel Rock") \
	XX(175, MT_EMBER, "Mt. Ember") \
	XX(176, BERRY_FOREST, "Berry Forest") \
	XX(177, ICEFALL_CAVE, "Icefall Cave") \
	XX(178, ROCKET_WAREHOUSE, "Rocket Warehouse") \
	XX(179, TRAINER_TOWER_179, "Trainer Tower") \
	XX(180, DOTTED_HOLE, "Dotted Hole") \
	XX(181, LOST_CAVE, "Lost Cave") \
	XX(182, PATTERN_BUSH, "Pattern Bush") \
	XX(183, ALTERING_CAVE_183, "Altering Cave") \
	XX(184, TANOBY_CHAMBERS, "Tanoby Chambers") \
	XX(185, THREE_ISLE_PATH, "Three Isle Path") \
	XX(186, TANOBY_KEY, "Tanoby Key") \
	XX(187, BIRTH_ISLAND_187, "Birth Island") \
	XX(188, MONEAN_CHAMBER, "Monean Chamber") \
	XX(189, LIPTOO_CHAMBER, "Liptoo Chamber") \
	XX(190, WEEPTH_CHAMBER, "Weepth Chamber") \
	XX(191, DILFORD_CHAMBER, "Dilford Chamber") \
	XX(192, SCUFIB_CHAMBER, "Scufib Chamber") \
	XX(193, RIXY_CHAMBER, "Rixy Chamber") \
	XX(194, VIAPOIS_CHAMBER, "Viapois Chamber") \
	XX(195, EMBER_SPA, "Ember Spa") \
	XX(196, CELADON_DEPT_SPECIAL_AREA, "Celadon Dept./Special Area") \
	XX(197, AQUA_HIDEOUT, "Aqua Hideout") \
	XX(198, MAGMA_HIDEOUT, "Magma Hideout") \
	XX(199, MIRAGE_TOWER, "Mirage Tower") \
	XX(200, BIRTH_ISLAND_200, "Birth Island") \
	XX(201, FARAWAY_ISLAND, "Faraway Island") \
	XX(202, ARTISAN_CAVE, "Artisan Cave") \
	XX(203, MARINE_CAVE, "Marine Cave") \
	XX(204, UNDERWATER_204, "Underwater") \
	XX(205, TERRA_CAVE, "Terra Cave") \
	XX(206, UNDERWATER_206, "Underwater") \
	XX(207, UNDERWATER_207, "Underwater") \
	XX(208, UNDERWATER_208, "Underwater") \
	XX(209, DESERT_UNDERPASS, "Desert Underpass") \
	XX(210, ALTERING_CAVE_210, "Altering Cave") \
	XX(211, NAVEL_ROCK_211, "Navel Rock") \
	XX(212, TRAINER_HILL, "Trainer Hill")
enum {
#define XX(id, token, name) token = (uint8_t)id,
LOCATIONS(XX)
#undef XX
};
struct { uint8_t id; char const *name; } const locations[] = {
#define XX(id, token, name) { id, name },
LOCATIONS(XX)
#undef XX
};

#define POCKETS(XX) \
	XX(0, PC_ITEMS, "PC Items") \
	XX(1, ITEMS_POCKET, "Items Pocket") \
	XX(2, KEY_ITEMS_POCKET, "Key Items Pocket") \
	XX(3, POKE_BALLS_POCKET, "Poké Balls Pocket") \
	XX(4, HM_TM_POCKET, "TM Case") \
	XX(5, BERRY_POCKET, "Berries Pocket")
enum {
#define XX(id, token, label) token = (gba_item_pocket_t)id,
POCKETS(XX)
#undef XX
};
struct { uint8_t id; char const *label; } const pockets[] = {
#define XX(id, token, label) { id, label },
POCKETS(XX)
#undef XX
};

// https://bulbapedia.bulbagarden.net/wiki/Pok%C3%A9mon_data_substructures_(Generation_III)
enum {
	MASTER_BALL_CAUGHT = 1,
	ULTRA_BALL_CAUGHT = 2,
	GREAT_BALL_CAUGHT = 3,
	POKE_BALL_CAUGHT = 4,
	SAFARI_BALL_CAUGHT = 5,
	NET_BALL_CAUGHT = 6,
	DIVE_BALL_CAUGHT = 7,
	NEST_BALL_CAUGHT = 8,
	REPEAT_BALL_CAUGHT = 9,
	TIMER_BALL_CAUGHT = 10,
	LUXURY_BALL_CAUGHT = 11,
	PREMIER_BALL_CAUGHT = 12,
};
enum {
	SAPPHIRE_GAME = 1,
	RUBY_GAME = 2,
	EMERALD_GAME = 3,
	FIRERED_GAME = 4,
	LEAFGREEN_GAME = 5,
	COLOSSEUM_XD_GAME = 6,
};

// https://bulbapedia.bulbagarden.net/wiki/Pok%C3%A9mon_data_structure_(Generation_III)
enum {
	JAPANESE = 1,
	ENGLISH = 2,
	FRENCH = 3,
	ITALIAN = 4,
	GERMAN = 5,
	KOREAN = 6,
	SPANISH = 7,
};

// https://bulbapedia.bulbagarden.net/wiki/In-game_trade
gba_trainer_t const elyssa[1] = {{
	.name = { 0xbf, 0xc6, 0xd3, 0xcd, 0xcd, 0xbb, 0xff }, // "ELYSSA"
	.is_female = 1,
	.id = 8810,
	.sid = 0, // TODO
}};
gba_trainer_t const reyley[1] = {{
	.name = { 0xcc, 0xbf, 0xd3, 0xc6, 0xbf, 0xd3, 0xff }, // "REYLEY"
	.is_female = 0,
	.id = 1985,
	.sid = 0, // TODO
}};
gba_trainer_t const saige[1] = {{
	.name = { 0xcd, 0xbb, 0xc3, 0xc1, 0xbf, 0xff, 0x00 }, // "SAIGE"
	.is_female = 1,
	.id = 63184,
	.sid = 0, // TODO
}};
