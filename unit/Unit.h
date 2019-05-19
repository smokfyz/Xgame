//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_UNIT_H
#define XGAME_UNIT_H

#include <memory>
#include <string>
#include "../field/Cell.h"

using namespace std;

class Unit {

protected:
    string type_name;

    unsigned attack;
    unsigned range;
    unsigned armor;
    unsigned health;
    unsigned health_max;
    unsigned energy;
    unsigned energy_max;

    shared_ptr<Cell> position;

public:
    Unit();
    virtual ~Unit() = default;

    string getTypeName() const;

    unsigned getAttack() const;
    unsigned getRange() const;
    unsigned getArmor() const;
    unsigned getHealth() const;
    unsigned getHealthMax() const;
    unsigned getEnergy() const;
    unsigned getEnergyMax() const;

    void setEnergy(unsigned);

    void damage(unsigned);
    void heal(unsigned);

    void setPosition(shared_ptr<Cell>);
    shared_ptr<Cell> getPosition();

    void attackUnit(shared_ptr<Unit>);

    virtual void destruction() = 0;

    void reset();
};


class Archer : public Unit {

public:
    Archer() {
        type_name = "Archer";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};


class Tank : public Unit {

public:
    Tank() {
        type_name = "Tank";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};


class Knight : public Unit {

public:
    Knight() {
        type_name = "Knight";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};


class King : public Unit {

public:
    King() {
        type_name = "King";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};


class Priest : public Unit {

public:
    Priest() {
        type_name = "Priest";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};


class Killer : public Unit {

public:
    Killer() {
        type_name = "Killer";
        attack = 10;
        range = 5;
        health_max = 50;
        health = health_max;
        energy_max = 200;
        energy = energy_max;
    }

    void destruction() override;

};

#endif //XGAME_UNIT_H
