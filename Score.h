#ifndef SCORE_H
#define SCORE_H

class Score{
 private:
  int p1;
  int p2;
  int draws;

 public:
  Score();
  //  Score(int,int,int);
  void print();
  void incP1();
  void incP2();
  void incDraws();
  void reset();

};

#endif
