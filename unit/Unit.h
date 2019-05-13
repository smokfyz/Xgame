//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_UNIT_H
#define XGAME_UNIT_H

#include <memory>
#include <string>

using namespace std;

class Unit {

protected:
    unsigned attack;
    unsigned range;
    unsigned health;
    unsigned health_max;
    unsigned energy;
    unsigned energy_max;

public:
    virtual ~Unit() = default;

    unsigned getAttack() const;
    unsigned getRange() const;
    unsigned getHealth() const;
    unsigned getHealthMax() const;
    unsigned getEnergy() const;
    unsigned getEnergyMax() const;

    void increaseEnergy(unsigned);
    void decreaseEnergy(unsigned);

    void damage(unsigned);
    void heal(unsigned);

    virtual void destruction() = 0;

    void reset();
};

class Archer : public Unit {

public:
    Archer() {
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 100;
        energy = energy_max;
    }

    void destruction() override;

};


#endif //XGAME_UNIT_H
