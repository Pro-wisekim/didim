//Program.cpp
#include "Student.h"

int main(void)
{
  Student *stu = new Student(3, "홀길동");
  stu->View();
  delete stu;
  return 0;
}
