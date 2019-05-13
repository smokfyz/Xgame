//
// Created by smokfyz on 10.04.19.
//

#include "Unit.h"


unsigned Unit::getAttack() const { return attack; }
unsigned Unit::getRange() const { return range; }
unsigned Unit::getHealth() const { return health; }
unsigned Unit::getHealthMax() const { return health_max; }
unsigned Unit::getEnergy() const { return energy; }
unsigned Unit::getEnergyMax() const { return energy_max; }

void Unit::increaseEnergy(unsigned i) { energy = ( energy + i > energy_max ) ? energy_max : energy + i; }
void Unit::decreaseEnergy(unsigned d) { energy -= d; }

void Unit::damage(unsigned d) { health -= d; }
void Unit::heal(unsigned h) { health = ( health + h > health_max ) ? health_max : health + h; }

void Unit::reset() {
    health = health_max;
    energy = energy_max;
}

void Archer::destruction() {

}