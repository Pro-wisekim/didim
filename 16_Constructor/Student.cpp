#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(void)
{
  cout<<"학생 개체 생성자"<<endl;
}

Student::~Student(void)
{
  cout<<"학생 개체 소멸자"<<endl;
}
