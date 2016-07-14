//Program.cpp
#include "Student.h"

int main()
{
  Student *arr[3];

  arr[0] = new Student("Hong-Gil Dong");
  arr[1] = new Student("kim");
  arr[2] = new Student("Lee");

  cout<<"현재 총 학생 수:"<<Student::GetStuCount()<<endl;
  for(int i = 0; i<3; i++)
  {
    arr[i]->View();
  }

  arr[0]->SetScore(0,90);//정상
  arr[0]->SetScore(1,80);
  arr[0]->SetScore(3,90);//설정 오류

  arr[1]->SetScore(0,100);
  arr[1]->SetScore(1,180);//설정 오류
  arr[1]->SetScore(2,80);
  
  arr[2]->SetScore(0,80);
  arr[2]->SetScore(1,90);
  arr[2]->SetScore(2,90);//설정 오류

  cout<<"현재 학 생수:"<<Student::GetStuCount()<<endl;
  for(int i = 0; i < 3; i++)
  {
    arr[i]->View();
  }

  for(int i = 0; i < 3; i++)
  {
    delete arr[i];
  }

  return 0;
}
