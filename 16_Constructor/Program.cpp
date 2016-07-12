#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
  Student stu1;
  cout<<"Test1 : stu1"<<endl;
  Student *stu2 = new Student();
  cout<<"Test2 : *stu2"<<endl;
  delete stu2;
  cout<<"Test3 : delete stu2"<<endl;
  return 0;
}

//g++ -o exefile  Student.cpp Program.cpp 
