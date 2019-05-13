//
// Created by smokfyz on 10.04.19.
//

#include <iostream>
#include <algorithm>
#include <climits>
#include "Field.h"

using namespace std;

Field::Field(unsigned s) : field_size(s) { fillContent(); }

unsigned Field::getSize() const { return field_size; }

void Field::fillContent() {

    for (auto i = 0; i < field_size; i++) {
        content.emplace_back();
        for (auto j = 0; j < field_size; j++)
            content[i].push_back(move(make_shared<Cell>(j, i)));
    }

    for (auto i = 0; i < field_size; i++) {
        for (auto j = 0; j < field_size; j++) {
            vector<shared_ptr<Cell>> &reachable = content[i][j]->getReachable();
            if(i % 2 == 0) {
                if(i - 1 >= 0 && i + 1 < field_size) {
                    if(j - 1 >= 0) {
                        reachable.push_back(content[i - 1][j - 1]);
                        reachable.push_back(content[i + 1][j - 1]);
                        reachable.push_back(content[i][j - 1]);
                    }
                    reachable.push_back(content[i - 1][j]);
                    reachable.push_back(content[i + 1][j]);
                    if(j + 1 < field_size)
                        reachable.push_back(content[i][j + 1]);
                    continue;
                } else if(i - 1 < 0) {
                    if(j - 1 >= 0) {
                        reachable.push_back(content[i + 1][j - 1]);
                        reachable.push_back(content[i][j - 1]);
                    }
                    reachable.push_back(content[i + 1][j]);
                    if(j + 1 < field_size)
                        reachable.push_back(content[i][j + 1]);
                    continue;
                } else if(i + 1 == field_size) {
                    if(j - 1 >= 0) {
                        reachable.push_back(content[i - 1][j - 1]);
                        reachable.push_back(content[i][j - 1]);
                    }
                    reachable.push_back(content[i - 1][j]);
                    if(j - 1 < field_size)
                        reachable.push_back(content[i][j + 1]);
                    continue;
                }
            } else {
                if(i - 1 >= 0 && i + 1 < field_size) {
                    if(j + 1 < field_size) {
                        reachable.push_back(content[i - 1][j + 1]);
                        reachable.push_back(content[i + 1][j + 1]);
                    }
                    if(j - 1 >= 0)
                        reachable.push_back(content[i][j - 1]);
                    reachable.push_back(content[i - 1][j]);
                    reachable.push_back(content[i + 1][j]);
                    if(j + 1 < field_size)
                        reachable.push_back(content[i][j + 1]);
                    continue;
                } else if(i + 1 == field_size) {
                    if(j + 1 < field_size)
                        reachable.push_back(content[i - 1][j + 1]);
                    if(j - 1 >= 0)
                        reachable.push_back(content[i][j - 1]);
                    reachable.push_back(content[i - 1][j]);
                    if(j + 1 < field_size)
                        reachable.push_back(content[i][j + 1]);
                    continue;
                }
            }
        }
    }

}

vector<shared_ptr<Cell>> &Field::operator[](int idx) { return content[idx]; }