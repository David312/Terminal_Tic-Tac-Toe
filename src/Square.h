#ifndef SQUARE_H
#define SQUARE_H


typedef enum Mark{X,O,EMPTY,ERROR} Mark;

class Square{
 private:
  Mark value;
  bool pointed;

 public:
  Square();
  Square(Mark);//maybe not needed
  void print();
  void setMark(Mark);
  Mark getMark();
  void reset();
  void point();
  void unpoint();
};

#endif
