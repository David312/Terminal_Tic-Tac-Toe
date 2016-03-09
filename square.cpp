#include <iostream.h>
#include "square.h"

using namespace std;

Square::Square(){
  this->value=EMPTY;
}

Square::Square(Mark m){
  this->value=m;
}

void Square::setMark(Mark m){
  this->value=m;
}

Mark Square::getMark(){
  return this->value;
}

void Square::print(){
  char c;
  switch(this->value){
  case X:c='X'; break;
  case O:c='O'; break;
  case EMPTY:c=' ';break;
  case ERROR:
  default:c='E';
  };
  cout<<"["<<c<<"]";
}
