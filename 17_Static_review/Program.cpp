#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
  cout<<"현재 학생 수:"<<Student::GetLastNum()<<endl;
  Student *stu = new Student();
  cout<<"학생 번호:"<<stu->GetLastNum()<<endl;

  cout<<"현재 학생 수:"<<Student::GetLastNum()<<endl;

  Student *stu2 = new Student();
  cout<<"학생번호;"<<stu->GetNum()<<endl;

  cout<<"현재 학생 수:"<<Student::GetLastNum()<<endl;

  Student *stu3 = new Student();
  cout<<"학생 번호:"<<stu->GetNum()<<endl;

  cout<<"현재 학생 수:"<<Student::GetLastNum()<<endl;

  delete stu;
  delete stu2;
  delete stu3;
  return 0;
}
