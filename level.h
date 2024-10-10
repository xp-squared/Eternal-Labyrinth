#ifndef LEVEL_H
#define LEVEL_H


using namespace std;

class Level {
    public:
        Level(int levelNumber);

    private:
        int enemies; // implement where it makes an enemy object for us to fight
        int gold;
        int floorLuckFactor; // luck of finding gold or finding an enemy
        // implement trasure to find

};

#endif
