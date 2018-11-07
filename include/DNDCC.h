#define let static const int

class DNDCC {

public:

	// Attributes
	let STRENGTH = 0;
	let DEXTETRITY = 1;
	let CONSTITUTION = 2;
	let INTELLIGENCE = 3;
	let WISDOM = 4;
	let CHARISMA = 5;

	// Races
	let DRAGONBORN = 0;
	let DWARF = 1;
	let ELF = 2;
	let GNOME = 3;
	let HALF_ELF = 4;
	let HALF_ORC = 5;
	let HALFLING = 6;
	let HUMAN = 7;
	let TIEFLING = 8;

	// Subraces
	let HILL_DWARF = 0;
	let MOUNTAIN_DWARF = 1;

	let HIGH_ELF = 0;
	let WOOD_ELF = 1;
	let DARK_ELF = 2;

	let FOREST_GNOME = 0;
	let ROCK_GNOME = 1;

	let LIGHTFOOT_HALFLING = 0;
	let STOUT_HALFLING = 1;

	// Classes
	let BARBARIAN = 0;
	let BARD = 1;
	let CLERIC = 2;
	let DRUID = 3;
	let FIGHTER = 4;
	let MONK = 5;
	let PALADIN = 6;
	let RANGER = 7;
	let ROGUE = 8;
	let SORCERER = 9;
	let WARLOCK = 10;
	let WIZARD = 11;

	// Proficiencies
	let ARMOR = 0;
	let WEAPONS = 1
	let TOOLS = 2;

	// Proficiency Bonus'
	let[] PROFBONUSES = {
		0, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6
	};
	// PROBONUS[<level>] returns bonus at given level.

}

/*
