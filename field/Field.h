//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_FIELD_H
#define XGAME_FIELD_H

#include <vector>
#include "Cell.h"

#define DEFAULT_FIELD_SIZE 100

using namespace std;

class Field {
    unsigned const field_size;
    vector<vector<Cell>> content;

    void fillContent();

public:
    explicit Field(unsigned = DEFAULT_FIELD_SIZE);

    unsigned const getSize();

    void print();
};


#endif //XGAME_FIELD_H
