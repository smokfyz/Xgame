//
// Created by smokfyz on 10.04.19.
//

#ifndef XGAME_FIELD_H
#define XGAME_FIELD_H

#include <vector>
#include "../field/Cell.h"

#define DEFAULT_FIELD_SIZE 20

using namespace std;

class Field {
    unsigned const field_size;
    vector<vector<shared_ptr<Cell>>> content;

    void fillContent();

public:
    explicit Field(unsigned = DEFAULT_FIELD_SIZE);

    unsigned getSize() const;

    vector<shared_ptr<Cell>> &operator[](int idx);

};


#endif //XGAME_FIELD_H
