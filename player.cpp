#include "player.h"
#include <iostream>

Player::Player() {
    name = "Unknown";
    health = 1;
}

Player::Player(string name) {
    this->name = name;
    this->health = 100;
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}