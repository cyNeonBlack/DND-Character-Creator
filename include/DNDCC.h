#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>


/*
* Classes::<NAME> returns 0-11 based on selected class.
* Example use: 
* int class = Classes::BARBARIAN;
*/
class Classes {
public:
	enum x { 
		BARBARIAN,
		BARD,
		CLERIC,
		DRUID,
		FIGHTER,
		MONK,
		PALADIN,
		RANGER,
		ROGUE,
		SORCERER,
		WARLOCK,
		WIZARD
	};
};

/*
* Attributes::<ATTRIBUTE> returns 0-6 based on selected Attribute.
* Example use:
* stats[Attributes::STRENGTH] = 15;
*/
class Attributes {
public:
	enum x {
		STRENGTH,
		DEXTERITY,
		CONSTITUTION,
		INTELLIGENCE,
		WISDOM,
		CHARISMA
	};
};

/*
* Races::<RACE> returns 0-8 based on selected race.
* Example uses:
* race = Races::ELF;
* if (this.race == Races::GNOME) { ... }
*/
class Races {
public:
	enum x {
		DRAGONBORN,
		DWARF,
		ELF,
		GNOME,
		HALF_ELF,
		HALF_ORC,
		HALFLING,
		HUMAN,
		TIEFLING
	};
};

/*
* SubRaces::<SUBRACE> returns 0-2 based on selected enum and type.
* example uses:
* if (this.race == Races::ELF && this.subRace == SubRaces::HIGH_ELF) { ... }
*/
class SubRaces {
public:
	enum Dwarves {
		HILL_DWARF,
		MOUNTAIN_DWARF
	};

	enum Elves {
		HIGH_ELF,
		WOOD_ELF,
		DARK_ELF
	};

	enum Gnomes {
		FOREST_GNOME,
		ROCK_GNOME
	};

	enum Halflings {
		LIGHTFOOT_HALFLING,
		STOUT_HALFLING
	};
};

/*
* Proficiencies::<PROFICIENCY> returns 0-4 based on selected prof.
* PROFBONUSES[<LEVEL>] returns the proficiency bonus for that level.
* Example uses:
* this.proficiencies[Proficiences::ARMOUR].push("Heavy Armour");
* if (proficiencies[Attributes::STRENGTH][Proficiencies::ATHLETICS]) { ... }
* this.profBonus = Proficiencies::PROFBONUSES[this.level];
*/
class Proficiencies {
public:
	enum BasicProfs {
		ARMOUR,
		WEAPONS,
		TOOLS
	};

	enum StrProfs {
		ATHLETICS
	};

	enum DexProfs {
		ACROBATICS,
		SLEIGHT_OF_HAND,
		STEALTH
	};

	enum ConProfs {
		// lol
	};

	enum IntProfs {
		ARCANA,
		HISTORY,
		INVESITGATION,
		NATURE,
		RELIGION
	};

	enum WisProfs {
		ANIMAL_HANDLING,
		INSIGHT,
		MEDICINE,
		PERCEPTION,
		SURVIVAL
	};

	enum ChaProfs {
		DECEPTION,
		INTIMIDATION,
		PERFORMANCE,
		PERSUASION
	};

	static constexpr int PROFBONUSES [21] = {
		0, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6
	};
};