//Student.cpp
#include "Student.h"
//static 멤버 필드는 멤버 필드 선언을 해야함, 선언문에서 static 키워드 사용 안 함
int Student::last_num;

Student::Student(void)
{
  last_num++;
  num = last_num;
}
int Student::GetNum()
{
  return num;
}
//static 멤버 메서드 구현 정의에서는 static 키워드 사용 안
int Student::GetLastNum()
{
  return last_num;
}
