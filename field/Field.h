//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_FIELD_H
#define XGAME_FIELD_H

#include <vector>
#include "Cell.h"

#define DEFAULT_FIELD_SIZE 25

using namespace std;

class Field {
    unsigned const field_size;
    vector<vector<shared_ptr<Cell>>> content;

    void fillContent();

public:
    explicit Field(unsigned = DEFAULT_FIELD_SIZE);

    vector<shared_ptr<Cell>> &operator[](int);

    unsigned const getSize();

    void print();
};


#endif //XGAME_FIELD_H
