#ifndef CLASS_H
#define CLASS_H

#include <string>

using namespace std;

class Class {
public:
    Class(string name);
    virtual ~Class() = default;
    string getName() const;
    virtual int getInitialHealth() const = 0;
    virtual string getSpecialAbility() const = 0;

protected:
    string name;
};

class Wizard : public Class {
public:
    Wizard();
    int getInitialHealth() const override;
    string getSpecialAbility() const override;
};

class Warrior : public Class {
public:
    Warrior();
    int getInitialHealth() const override;
    string getSpecialAbility() const override;
};

class Knight : public Class {
public:
    Knight();
    int getInitialHealth() const override;
    string getSpecialAbility() const override;
};

#endif
