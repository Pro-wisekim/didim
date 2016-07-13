//Student.h
#pragma once
class Student
{
  int num;
  static int last_num;//정적 멤버 필드
public:
  Student(void);
  int GetNum();
  static int GetLastNum();//정적 멤버 메서드
};
