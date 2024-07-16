#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector> 
#include "item.h"
//#include "Ally.h"
#include "class.h"

using namespace std;

class Player {
    public:
        Player(string name, Class* playerClass);

        void addItem(Item item);
        //void addAlly(Ally ally);
        void showInventory() const;
        // void showAllies() const;


        // getters and setters
        string getName() const;
        int getHealth() const;
        void setHealth(int health);
        void increaseHealth(int amount);
        void decreaseHealth(int amount);


        string getClassName() const;
        string getSpecialAbility() const;

    private:
        string name;
        int health;
        // vector<Item> inventory;
        //vector<Ally> allies;
        Class* playerClass;

};

#endif