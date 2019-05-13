//
// Created by smokfyz on 12.04.19.
//

#ifndef XGAME_GAME_H
#define XGAME_GAME_H

#include <vector>
#include "../field/Field.h"
#include "../player/Player.h"
#include "../gui/GUI.h"

using namespace std;

class Game {
    Game();

    unique_ptr<GUI> gui;
    unique_ptr<Field> field;

    vector<shared_ptr<Player>> players;

    unsigned current_turn_player;
    unsigned number_of_moves;

public:
    Game(Game const&)            = delete;
    void operator=(Game const&)  = delete;

    static Game &getGame();

    Field &getField();

    shared_ptr<Player> getCurrentPlayer();

    unsigned getNumOfMoves();

    void addPlayer(shared_ptr<Player> &);

    void createUnits();

    void nextTurn();

    void run();
};


#endif //XGAME_GAME_H
