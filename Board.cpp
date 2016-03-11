#include <iostream>
#include "Board.h"

Board::Board(){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      board[i][j];// call default constructor
    }
  }
  this->numFilled=0;
}

int Board::getNumFilled(){
  return this->numFilled;
}

bool Board::hasRow(){
  return false;//TODO: Implement function
}

bool Board::hasColumn(){
  return false;//TODO: Implement function
}

bool Board::hasDiagonal(){
  return false;//TODO: Implement function
}

bool Board::hasWinner(){
  if(this->numFilled < 5)
    return false;
  return hasRow()||hasColumn()||hasDiagonal();
}

int Board::fillSquare(Mark m,int posx,int posy){
  if(board[posx][posy].getMark()!=EMPTY)
    return -1;
  board[posx][posy].setMark(m);
}

void Board::print(){
  //TODO: Implement function
}
