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

int main() {
    
    string playerName;
    intro();

    cout << "What is your name traveller? ";
    getline(cin, playerName);
    Player user;
    
    cout << user.getName() << ", what class will you choose?\n";


    return 0;
}