#include <iostream>
#include <string>
#include "player.h"
#include "item.h"
//#include "ally.h"



/*
things to add:
-player class maybe should have current health and max health to keep proper track of damage
*/
using namespace std;

void intro() {
    cout << "\n***********************************************************************\nWelcome to Eternal Labyrinth, a text based game created by Zane Christe\n***********************************************************************\n";
    cout << "\nBLahBlahBlah add descriptors intro and other cool stuff\n";
}

void showMenu() {
   cout << "1. Explore current level: " << endl;
   // cout << "2. Show Inventory" << endl;
   // cout << "3. Show Ally Information" << endl;
   // cout << "4. Move to next level" << endl;
   cout << "5. Quit" << endl;
}

Class* chooseClass() {
    cout << "Choose your class:" << endl;
    cout << "1. Warrior" << endl;
    // cout << "2. Wizard" << endl;
    // cout << "3. Knight" << endl;

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            return new Warrior();
        // case 2:
        //    return new Wizard();
        // case 3:
        //    return new Knight();
        default:
            cout << "Invalid choice. Defaulting to Warrior." << endl;
            return new Warrior();
    }
}

int main() {

    string playerName;
    string classChoice;
    intro();

    cout << "\nWhat is your name traveller? ";
    getline(cin, playerName);
    

    Class* playerClass = chooseClass(); // if 1 is chosen it returns new warrior
    Player user(playerName, playerClass); 
    cout << endl << user.getName() << ", you have chosen the class " << user.getClassName() << ".\nSpecial ability: " << user.getSpecialAbility() << ".\nCurrent Gold: " << user.getGold();

    bool gameRunning = true;

    
    while (gameRunning) {
        showMenu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                // exploreLevel();
                // implement exploring level and rng sequence of encountering monsters
                // as well make a counter of how many times player has explored the level so there is nothing left to find
            case 2:
                // user.showInventory();
                // break;
            case 3:
                //user.showAllies(); 
                cout << "Allies feature not implemented yet.\n";
                break;
            case 4:
                // Logic for exploring next level
                cout << "You explore the next level...\n";
                break;
            case 5:
                cout << "Do you want to quit the game?";
                gameRunning = false;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    

    cout << "Thank you for playing!" << endl;
    delete playerClass; 

    return 0;
}

/*
g++ main.cpp Player.cpp Item.cpp Class.cpp -o EternalLabyrinth
./EternalLabyrinth
*/