#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    counter.resize(FACES);

    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//overloaded constructor
GameDie::GameDie(unsigned int num)
{
    if( num == 0 )
    {
        counter.resize(SIDES);
    }
    else{
        counter.resize(num);
    }
    for(int i=0; i<SIDES; i++)
    {
        counter[i] = 0;
    }

}

//generate a random number between 1-n where n is the counter size
// (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % counter.size();
    counter[roll]++;
    return roll + 1;
}

vector <int> GameDie::get_distribution(){
    return counter;
}
