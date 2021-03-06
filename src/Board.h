#ifndef BOARD_H
#define BOARD_H

#include "Square.h"

class Board{
 private:
  Square board[3][3];
  int numFilled;
  bool hasRow();
  bool hasColumn();
  bool hasDiagonal();


 public:
  Board(); // default constructor, maybe not needed
  int getNumFilled(); // maybe it should'n be available
  bool hasWinner();// true if there is a winner
  bool itsADraw();
  int fillSquare(Mark,int,int);// returns -1 if already filled or error
  void setPos(int,int,int,int);
  void print();// draws the board
  void reset();


};

#endif
