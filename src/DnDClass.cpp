#include "DnDClass.h"

// Initialises DnDClass to initHP and hitDice
DnDClass::DnDClass(int _initHP, int _hitDice) : 
initHP{_initHP}, 
hitDice{_hitDice} {

}

// Returns random value between 1 and hitDice
int DnDClass::rollHitDie(){
	return rand() % hitDice + 1;
}

// Returns initHP
int DnDClass::getInitHP() const {
	return initHP;
}
