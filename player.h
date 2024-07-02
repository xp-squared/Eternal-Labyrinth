#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector> 

using namespace std;

class Player {
    public:
        Player(string name);
        //void addItem(Item item);
        //void addAlly(Ally ally);
        void showInventory() const;
        // void showAllies() const;

        // getters and setters
        string getName() const;
        int getHealth() const;
        void setHealth(int health);
        void increaseHealth(int amount);
        void decreaseHealth(int amount);

    private:
        string name;
        int health;
        //vector<Item> inventory;
        //vector<Ally> allies;

};

#endif