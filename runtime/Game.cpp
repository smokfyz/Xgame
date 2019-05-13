//
// Created by smokfyz on 12.04.19.
//

#include "Game.h"
#include "../gui/GUI.h"

Game::Game() {
    gui = make_unique<GUI>();
    field = make_unique<Field>(20);

    current_turn_player = 0;
    number_of_moves = 0;
}

Game &Game::getGame() {
    static Game instance;

    return instance;
}

Field &Game::getField() { return *field; }

void Game::addPlayer(shared_ptr<Player> &player) { players.push_back(player); }

void Game::createUnits() {
    shared_ptr<Unit> new_unit;
    unsigned i = 0, j = 0;
    Field &fld = *field;
    for(auto &player : players) {
        new_unit = make_shared<Archer>();
        player->addUnit(new_unit);
        fld[i][j]->setUnit(new_unit);
        i++;
        new_unit = make_shared<Archer>();
        player->addUnit(new_unit);
        fld[i][j]->setUnit(new_unit);
        i++;
        new_unit = make_shared<Archer>();
        player->addUnit(new_unit);
        fld[i][j]->setUnit(new_unit);
        i++;
        new_unit = make_shared<Archer>();
        player->addUnit(new_unit);
        fld[i][j]->setUnit(new_unit);
        i++;
        i = 0;
        j++;
    }
}

unsigned Game::getNumOfMoves() { return number_of_moves; }

shared_ptr<Player> Game::getCurrentPlayer() { return players[current_turn_player]; }

void Game::nextTurn() {}

void Game::run() { gui->run(); }