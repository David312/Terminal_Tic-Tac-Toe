#include <iostream>
#include <ncurses.h> //for interactive mode
#include "Game.h"

#define ENTER 13
#define Y 89
#define y 121
#define n 110
#define N 78



using namespace std;

Game::Game(){
  this->t=P1;
  this->st=NOT_FINISHED;
  this->posx=0;
  this->posy=0;
  b.setPos(0,0,posx,posy);
  initsrc();//initialize ncurses
  cbreak();//allows ctrl-c etc breaks
  noecho();//disable echo
  keypad(stdsrc,TRUE);//enable keypad

}

void Game::newGame(){
  //TODO: implement function
  this->posx=0;
  this->posy=0;
  this->st=NOT_FINISHED;
  b.reset();
}

void Game::print(){
  //TODO: implement function
  //  system("clear");//DANGER!!!
  b.print();
  promptKey();
}

int Game::start(){
  //TODO: implement function
  while(st == NOT_FINISHED){
    print();
    getKey();
    if(b.hasWinner()){
      if(t == P1)
	st = P2_WINS;
      else
	st = P1_WINS;
    }
    else if(b.itsADraw())
      st = DRAW;
  }
  if(askForPlayingAgain()==0){
    newGame();
    return 0;
  }
  return -1;
}

void Game::promptKey(){
  cout<<"Player "<<(this->t == P1 ? '1' : '2')<<", your turn!"<<endl;
}

void Game::getKey(){
  int ch=0;
  while(ch!=KEY_LEFT || ch!=KEY_RIGHT || 
	ch!=KEY_UP || ch!=KEY_DOWN || ch!=ENTER){
    ch=getch();
  }

  switch(ch){

  case KEY_LEFT:
    if(posx != 0)
      b.setPos(posx,posy,--posx,posy);
    break;

  case KEY_RIGHT:
    if(posx != 2)
      b.setPos(posx,posy,++posx,posy);
    break;

  case KEY_UP:
    if(posy != 0)
      b.setPos(posx,posy,posx,--posy);
    break;

  case KEY_DOWN:
    if(posy != 2)
      b.setPos(posx,posy,posx,++posy);
    break;

  case ENTER:
    //  int fillSquare(Mark);// returns -1 if already filled or error
    if(b.fillSquare((t == P1 ? X : O),posx,posy) != -1)
      this->t = (t==P1 ? P2 : P1);
    break;

  default:
    cout<<"ERROR!!!"<<endl;
  }

}

int Game::askForPlayingAgain(){
  if(st != DRAW){
  cout<<"Congratulations Player "<<(st==P1_WINS ? '1' : '2')<<
    ", you are the winner!"<<endl;
  }
  else
    cout<<"It's a draw..."<<endl;

  cout<<"Would you like to play again? (Y/N): ";
  int ch=0;
  while(ch!=Y|| ch!=y || ch!=N || ch!=n){
    ch=getch();
  }
  if(ch==Y || ch==y)
    return 0;
  else
    return -1;
}
