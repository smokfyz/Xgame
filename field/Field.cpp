//
// Created by smokfyz on 10.04.19.
//

#include "Field.h"

Field::Field(unsigned s) : field_size(s) { fillContent(); }

void Field::fillContent() {
    for(auto i = 0; i < field_size; i++) {
        content.emplace_back();
        for(auto j = 0; j < field_size; j++) {
            content[i].emplace_back();
        }
    }
}

unsigned const Field::getSize() { return field_size; }