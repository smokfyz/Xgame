//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_CELL_H
#define XGAME_CELL_H

#include <memory>
#include <vector>
#include "../unit/Unit.h"

using namespace std;

class Impediment;

class Cell {
    unsigned x, y;
    shared_ptr<Unit> unit;
    vector<shared_ptr<Cell>> reachable;

public:
    explicit Cell(unsigned x, unsigned y);

    unsigned getX() const;
    unsigned getY() const;

    shared_ptr<Unit> getUnit();
    void setUnit(shared_ptr<Unit>);

    vector<shared_ptr<Cell>> &getReachable();
};


#endif //XGAME_CELL_H
