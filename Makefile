GameDie: GameDie.o
	g++ -Wall -pedantic -g -o GameDie Gamedie.o

GameDie.o: GameDie.h GameDie.cpp
	g++ -Wall -pedantic -g -std=c++11 -c GameDie.cpp

