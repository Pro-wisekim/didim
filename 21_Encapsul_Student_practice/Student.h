//Student.h
#include <string>
#include <iostream>
using namespace std;

enum SIndex
{
  KOREAN, ENGLISH, MATH, MAX_SUBJECT
};

class Student
{
  static int last_num;
  const int num;
  string name;
  int scores[MAX_SUBJECT];
  static const string titles[MAX_SUBJECT];//과목명
public:
  static int GetStuCount();
  Student(string name);
  bool SetScore(int sindex, int score);
  int GetScore(int sindex)const;
  int GetTotal()const;
  double GetAverage()const;
  bool AvailSIndex(int sindex)const;//정적 인덱스가 유효한지 판별
  void View()const;
private:
  bool SetScore(int sindex, int score, int);
};
