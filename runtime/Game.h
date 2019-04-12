//
// Created by smokfyz on 12.04.19.
//

#ifndef XGAME_GAME_H
#define XGAME_GAME_H

#include <vector>
#include "../field/Field.h"
#include "../player/Player.h"

using namespace std;

class Game {
    unique_ptr<Field> field;
    vector<shared_ptr<Player>> players;
    unsigned current_turn;

public:
    Game();

    Field &getField();

    void addPlayer(shared_ptr<Player> &);
};


#endif //XGAME_GAME_H
