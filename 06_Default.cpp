#include <iostream>
using namespace std;

double CalculaterArea(double radius, double radion = 2 * 3.14)
{                                       //2*3.14를 안하게 되면 반원도 같은 넓이로 나옴
  return radius * radius * ( radion / 2 );
}

int main(void)
{
  cout<<"반지름이 3인 원의 넓이: ";
  cout<<CalculaterArea(3)<<endl;
  cout<<"반지름이 3인 반원의 넓이: ";
  cout<<CalculaterArea(3,3.14)<<endl;
  return 0;
}
