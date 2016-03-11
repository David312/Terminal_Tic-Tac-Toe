#ifndef SQUARE_H
#define SQUARE_H


typedef enum Mark{X,O,EMPTY,ERROR} Mark;

class Square{
  Mark value;

 public:
  Square();
  Square(Mark);
  void print();
  void setMark(Mark);
  Mark getMark();
};

#endif
