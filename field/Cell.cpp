//
// Created by smokfyz on 10.04.19.
//

#include "Cell.h"
#include "../gui/UI.h"
#include "../runtime/Game.h"

Cell::Cell(unsigned x, unsigned y) : x(x), y(y) {}

unsigned Cell::getX() const { return x; }
unsigned Cell::getY() const { return y; }

shared_ptr<Unit> Cell::getUnit() { return unit; }
void Cell::setUnit(shared_ptr<Unit> new_unit) { unit.swap(new_unit); }

vector<shared_ptr<Cell>> &Cell::getReachable() { return reachable; }