#include <iostream>
using namespace std;

int &CalSum(int s, int e);
int main(void)
{
  int &r1 = CalSum(1,100);
  int &r2 = CalSum(1,10);
  cout<<"r1:"<<r1<<", r2:"<<r2<<endl;

  return 0;
}

int &CalSum(int s, int e)
{
  int sum = 0;
  for(;s<=e; s++)
  {
    sum += s;
  }
  cout<<sum<<endl;
  return sum;
}
/*

int main(void)
{
  int i = 0;
  int &r = i;// 선언과 함께 초기화
  //참조선언문에 초기화를 하지 않거나 상수로 초기값을 설정 하면 컴파일 오류
  r=9;
  cout<<"i: "<<i<<endl;
  return 0;
}
*/
