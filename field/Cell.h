//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_CELL_H
#define XGAME_CELL_H

#include <memory>
#include "../impediment/Impediment.h"
#include "../unit/Unit.h"

using namespace std;

class Cell {
    unique_ptr<Impediment> imp;
    unique_ptr<Unit> unit;

public:
    explicit Cell(unique_ptr<Impediment> && = make_unique<Impediment>(),
         unique_ptr<Unit> && = make_unique<Unit>());

    Impediment const &getImpediment();

    Unit const &getUnit();
};


#endif //XGAME_CELL_H
