#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(){
  this->value=EMPTY;
  this->pointed=false;
}

Square::Square(Mark m){
  this->value=m;
  this->pointed=false;
}

void Square::setMark(Mark m){
  this->value=m;
}

Mark Square::getMark(){
  return this->value;
}

void Square::print(){
  char c;
  char m=' ';
  switch(this->value){
  case X:
    c='X'; break;
  case O:
    c='O'; break;
  case EMPTY:
    c=' ';break;
  case ERROR:
  default:
    c='E';
  };
  if(pointed==true)
    m='>';
  cout<<"["<<m<<c<<"]";
}

void Square::reset(){
  this->value=EMPTY;
  this->pointed=false;
}

void Square::point(){
  this->pointed=true;
}

void Square::unpoint(){
  this->pointed=false;
}
