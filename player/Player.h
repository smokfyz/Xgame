//
// Created by smokfyz on 12.04.19.
//

#ifndef XGAME_PLAYER_H
#define XGAME_PLAYER_H

#include <memory>
#include <string>
#include <vector>
#include "../field/Cell.h"

using namespace std;

class Player {
    static unsigned player_num;
    unsigned player_id;
    string name;
    string color;

    vector<shared_ptr<Unit>> units;

public:
    explicit Player(string &&, string &&);
    virtual ~Player() = default;

    unsigned getId();
    string getName();

    void addUnit(shared_ptr<Unit> &);
    bool hasUnit(shared_ptr<Unit> &);
};


#endif //XGAME_PLAYER_H
