#include <iostream>
#include <string>
using namespace std;

class Unit
{
  int num;
  string name;
  int hp;

public:
  Unit(int _num, string _name)
  {
    num = _num;
    name = _name;
    hp = 100;
  }
  void Train(int hour)
  {
    cout<<num<<"번 유닛("<<name<<") 훈련하다."<<endl;
    hp += hour;
  }
  void View()
  {
    cout<<num<<"번, 유닛 이름:"<<name<<", 체력:"<<hp<<endl;
  }
};

int main(void)
{
  Unit unit(3, "홍길동");
  unit.Train(5);
  unit.View();
  unit.View();
  return 0;
}
