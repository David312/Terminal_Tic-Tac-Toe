#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Score.h"

typedef enum{P1,P2}Turn;
typedef enum{NOT_FINISHED,P1_WINS,P2_WINS,DRAW}State;

class Game{
 private:
  Board b;
  Score sc;
  Turn t;
  State st;
  char getKey();
  void prompt();
  void process();





 public:
  Game();
  void print();
  void newGame();
  void start();
  

};


#endif
