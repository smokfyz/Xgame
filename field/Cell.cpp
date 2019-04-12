//
// Created by smokfyz on 10.04.19.
//

#include "Cell.h"

Cell::Cell(unique_ptr<Impediment> &&imp, unique_ptr<Unit> &&unit) : imp(move(imp)), unit(move(unit)) {}

Impediment const &Cell::getImpediment() { return *imp; }

Unit const &Cell::getUnit() { return *unit; }

