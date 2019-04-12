//
// Created by smokfyz on 10.04.19.
//

#include "Impediment.h"

Impediment::Impediment(unsigned perm) : permeability(perm) {}

unsigned Impediment::getPermeability() const { return permeability; }

ostream &operator<<(ostream &os, const Impediment &imp) {
    os << imp.getPermeability();
    return os;
}