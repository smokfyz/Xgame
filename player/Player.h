//
// Created by smokfyz on 12.04.19.
//

#ifndef XGAME_PLAYER_H
#define XGAME_PLAYER_H

#include <memory>

using namespace std;

class Game;
class Cell;

class Player {
    static unsigned player_num;
    unsigned player_id;
    shared_ptr<Game> game;
    shared_ptr<Cell> selected_cell;

public:
    Player();

    virtual ~Player();

    unsigned getId();

    void setCell(shared_ptr<Cell> &new_cell) {
        selected_cell = new_cell;
    }
};


#endif //XGAME_PLAYER_H
