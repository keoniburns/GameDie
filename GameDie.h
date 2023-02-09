#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
  private:

   vector <int> counter;
   const static int FACES = 6;
};

#endif
