#include <iostream>
#include <string>
#include "player.h"
#include "item.h"
//#include "ally.h"


using namespace std;

void intro() {
    cout << "\n***********************************************************************\nWelcome to Eternal Labyrinth, a text based game created by Zane Christe\n***********************************************************************\n";
    cout << "\nBLahBlahBlah add descriptors intro cool shit haha\n";
}

Class* chooseClass() {
    cout << "Choose your class:" << endl;
    cout << "1. Wizard" << endl;
    cout << "2. Warrior" << endl;
    cout << "3. Knight" << endl;

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            return new Wizard();
        case 2:
            return new Warrior();
        case 3:
            return new Knight();
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
    

    Class* playerClass = chooseClass();
    Player user(playerName, playerClass);
    cout << endl << user.getName() << ", you have chosen the class " << user.getClassName() << " with the special ability: " << user.getSpecialAbility() << ".\n";

    bool gameRunning = true;

    /*
    while (gameRunning) {
        showMenu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                user.showInventory();
                break;
            case 2:
                //user.showAllies(); 
                cout << "Allies feature not implemented yet.\n";
                break;
            case 3:
                // Logic for exploring next level
                cout << "You explore the next level...\n";
                break;
            case 4:
                gameRunning = false;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    */

    cout << "Thank you for playing!" << endl;
    delete playerClass; 

    return 0;
}

/*
g++ main.cpp Player.cpp Item.cpp Class.cpp -o EternalLabyrinth
./EternalLabyrinth
*/