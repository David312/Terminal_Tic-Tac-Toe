#ifndef SQUARE_H
#define SQUARE_H

namespace Square{
typedef enum Mark={X,O,EMPTY,ERROR};
}
class Square{
  Mark value;

 public:
  Square();
  Square(Mark);
  void print();
  void setMark(Mark);
  Mark getMark(){return value;}
}

