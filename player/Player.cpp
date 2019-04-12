//
// Created by smokfyz on 12.04.19.
//

#include "Player.h"

unsigned Player::player_num = 0;

Player::Player() {
    player_id = player_num++;
}

Player::~Player() {}

unsigned Player::getId() { return player_id; }