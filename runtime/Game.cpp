//
// Created by smokfyz on 12.04.19.
//

#include "Game.h"

Game::Game() {
    field = make_unique<Field>();
    current_turn = 0;
}

Field &Game::getField() { return *field; }

void Game::addPlayer(shared_ptr<Player> &player) {
    players.push_back(player);
}