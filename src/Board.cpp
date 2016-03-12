#include <iostream>
#include "Board.h"

using namespace std;

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
  int i;
  for(i=0;i<3;i++){
    if(board[i][0].getMark()==board[i][1].getMark() && 
       board[i][0].getMark()==board[i][2].getMark())
      return true;
  }
  return false;
}

bool Board::hasColumn(){
  int i;
  for(i=0;i<3;i++){
    if(board[0][i].getMark()==board[1][i].getMark() && 
       board[0][i].getMark()==board[2][i].getMark())
      return true;
  }
  return false;
}

bool Board::hasDiagonal(){
  return 
    board[0][0].getMark()==board[1][1].getMark() &&
    board[0][0].getMark()==board[2][2].getMark() ||
    board[2][0].getMark()==board[1][1].getMark() &&
    board[2][0].getMark()==board[0][2].getMark();
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
  return 0;
}

void Board::print(){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      board[i][j].print();
      if(j==2)
	cout<<endl;
    }
  }
}
