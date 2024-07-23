#include "player.h"
#include <iostream>

Player::Player(string name, Class* playerClass) {
    this->name = name;
    this->health = playerClass->getInitialHealth();
    this->playerClass = playerClass;
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

string Player::getClassName() const {
    return this->playerClass->getName();
}

string Player::getSpecialAbility() const {
    return this->playerClass->getSpecialAbility();
}

void Player::increaseHealth(int amount) {
    health =+ amount
}

void Player::decreaseHealth(int amount) {
    health =- amount
}

void Player::setHealth(int amount) {
    health = amount;
}