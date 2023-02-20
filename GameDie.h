#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <iostream>
#include <vector>

using namespace std;

class GameDie {
   public:
    GameDie();
    GameDie(unsigned int);
    int roll();
    vector<int> get_distribution();

   private:
    vector<int> counter;
    const static int FACES = 6;
};

#endif
