//
// Created by smokfyz on 12.04.19.
//

#include <algorithm>
#include "../runtime/Game.h"
#include "Player.h"

unsigned Player::player_num = 0;

Player::Player(string &&n, string &&c) : name(n), color(c) {
    player_id = player_num++;

    Game &game = Game::getGame();
    Field &field = game.getField();
}

unsigned Player::getId() { return player_id; }

string Player::getName() { return name; }

void Player::addUnit(shared_ptr<Unit> &unit) { units.push_back(unit); }
bool Player::hasUnit(shared_ptr<Unit> &unit) { return find(units.begin(), units.end(), unit) != units.end(); }