#include <iostream>

using namespace std;

enum Gender
{
  FEMALE,
  MALE
};

struct StuInfo
{
  int num;
  char name[20];
};

int main(void)
{
  Gender g = FEMALE;
  StuInfo s1 = {2, "홍길동"};

  cout<<"성별(0 - 여성 , 1 - 남성): "<<g<<endl;
  cout<<"학생 번호: "<<s1.num<<" 이름: "<<s1.name<<endl;
  return 0;
}
