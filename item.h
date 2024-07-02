#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector> 

using namespace std;

class Item {
    public:
        Item(string name);
        string getName() const; 

    private:
        string name;
        string description;

};

#endif
