#include <iostream>
using namespace std;

int num = 1;
class Demo
{
  int num;
public:
  Demo(int num)
  {
    this->num = num;
  }
  void View(int num)const
  {
    cout<<"전역 변수 : "<<::num<<endl;
    cout<<"멤버 필드 : "<<this->num<<endl;
    cout<<"지역 변수 : "<<num<<endl;
  }
};

int main()
{
  Demo *demo = new Demo(2);
  demo->View(3);
  delete demo;
  return 0;
}
