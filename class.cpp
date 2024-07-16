#include "class.h"

Class::Class(string name) {
    this->name = name;
}

string Class::getName() const {
    return this->name;
}

Wizard::Wizard() : Class("Wizard") {}

int Wizard::getInitialHealth() const {
    return 80;
}

string Wizard::getSpecialAbility() const {
    return "Cast Fireball";
}

Warrior::Warrior() : Class("Warrior") {}

int Warrior::getInitialHealth() const {
    return 120;
}

string Warrior::getSpecialAbility() const {
    return "Berserk Attack";
}

Knight::Knight() : Class("Knight") {}

int Knight::getInitialHealth() const {
    return 100;
}

string Knight::getSpecialAbility() const {
    return "Shield Block";
}
