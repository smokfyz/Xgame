//
// Created by smokfyz on 12.04.19.
//

#include "Game.h"
#include "../gui/GUI.h"

Game::Game() {
    gui = make_unique<GUI>();
    field = make_unique<Field>();
    current_turn = 0;
}

Field &Game::getField() { return *field; }

void Game::addPlayer(shared_ptr<Player> &player) {
    players.push_back(player);
}

void Game::run() {
    gui->run();
}