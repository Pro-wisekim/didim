//Student.cpp
#include "Student.h"

const int Student::max_hp = 200;//정적 상수화 멤버 필드 초기값 지정
Student::Student(int _num, string _name):num(_num)
//비 정적 상수화 멤버 필드 초기화
{
  name = _name;
  hp = 0;
}

void Student::View()const//상수화 멤버 메서드
{
  cout<<"번호:"<<num<<" 이름:"<<name<<" HP:"<<hp<<endl;
}
