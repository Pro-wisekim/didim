//Student.h
#include <iostream>
#include <string>
using namespace std;

class Student
{
  const int num;//비정적 상수화 멤버 필드
  string name;
  int hp;
  static const int max_hp;//정적 상수화 멤버 필드
public:
  Student(int _num, string _name);
  void View()const;//상수화 멤버 메서드
};
