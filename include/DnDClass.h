#include "DNDCC.h"

class DnDClass{
private:
    int initHP;                                // Class HP at Level 1
    int hitDice;                               // N value of Hit Dice
    int proficiencyBonus = DNDCC::PROBONUS[1]; // Proficiency bonus. Defaults to prof bonus at level 1.
    std::vector<std::string> proficiencies[3]; // Array of Vectors to hold list of proficiencies as a string
    std::string savingThrows[2];               // String array to hold Saving Throws
    std::vector<std::string> features;         // String Vector to hold list of features
    std::vector<std::string> equipment;        // String Vector to hold list of equipment

public:
    DnDClass(int initHP, int hitDice);      // Constructor
    int rollHitDie();                       // Returns Roll of Single Hit Die
    int getInitHP();                        // Returns HP at Level 1
};

/*
            Proficiency Bonus
            Spells Boolean (?)
            For Information:
            Primary Stat
            Description