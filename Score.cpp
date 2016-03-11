#include <iostream>
#include "Score.h"

using namespace std;

Score::Score(){
  this->p1=0;
  this->p2=0;
  this->draws=0;
}

void Score::print(){
  cout<<"Player 1: "<<this->p1<<"\tPlayer 2: "
      <<this->p2<<"\tDraws: "<<this->draws<<endl;
}

void Score::incP1(){
  this->p1++;
}

void Score::incP2(){
  this->p2++;
}

void Score::incDraws(){
  this->draws++;
}

void Score::reset(){
  this->p1=0;
  this->p2=0;
  this->draws=0;
}
