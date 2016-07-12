#include <iostream>
#include <string>
using namespace std;

class Musician
{
  string name;
public:
  Musician(string name)
  {
    this->name = name;
  }
  void  Play()
  {
    cout<<" lalala"<<endl;
  }
  void Greeting()
  {
    cout<<"안녕하세요. "<<name<<" 입니다."<<endl;
  }
};

class Pianist : public Musician
{
public:
  Pianist(string name):Musician(name)
  {
  }
  void Tuning()
  {
    cout<<"도도 레레"<<endl;
  }
};

void Test(Musician *musician);

int main(void)
{
  Pianist *pianist = new Pianist("JSJ");
  Test(pianist);
  pianist->Tuning();
  delete pianist;
  return 0;
}

void Test(Musician *musician)
{
  musician->Greeting();
  musician->Play();
}

/*
//캡슐화
class Student
{
  int num;
  string name;
  int iq;

public:
  Student(int num, string name)
  {
    this->num = num;
    this->name = name;
    this->iq = 100;
  }
  void Study()
  {
    cout<<name<<" student study"<<endl;
    iq++;
  }
  void View()
  {
    cout<<"number : "<<num<<"  name : "<<name<<"  IQ : "<<iq<<endl;
  }
};

int main(void)
{
  Student *stu = new Student(3, "gildong");
  stu->Study();
  stu->View();
  delete stu;
  return 0;
}
*/
