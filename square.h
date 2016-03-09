#ifndef SQUARE_H
#define SQUARE_H

enum Mark={X,O,EMPTY,ERROR};

class Square{
  Mark value;

 public:
  Square();
  Square(Mark);
  void print();
  void setMark(Mark m);
  Mark getMark(){return value;}
}
