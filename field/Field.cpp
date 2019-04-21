//
// Created by smokfyz on 10.04.19.
//

#include <iostream>
#include "Field.h"

using namespace std;

Field::Field(unsigned s) : field_size(s) { fillContent(); }

void Field::fillContent() {
    for (auto i = 0; i < field_size; i++) {
        content.emplace_back();
        for (auto j = 0; j < field_size; j++) {
            content[i].push_back(move(make_shared<Cell>()));
        }
    }
}

unsigned const Field::getSize() { return field_size; }

void Field::print() {
    for (auto i = 0; i < field_size; i++) {
        for (auto j = 0; j < field_size; j++) {
            cout << (*content[i][j]).getImpediment() << " ";
        }
        cout << endl;
    }
}

vector<shared_ptr<Cell>> &Field::operator[](int idx) { return content[idx]; }