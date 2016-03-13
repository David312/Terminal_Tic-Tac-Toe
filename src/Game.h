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
  int posx;//current x position on the board
  int posy;//current y position on the board
  void getKey();
  void promptKey();
  int askForPlayingAgain();
  void print();
  void newGame();


 public:
  Game();
  int start();
  
};


#endif
