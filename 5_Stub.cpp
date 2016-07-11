#include <iostream>

using namespace std;

int CalculateArea(int width, int height)
{
  return width * height;
}

int CalculateArea(int width, int height,bool)
{
  return width * height / 2;
}

int main(void)
{
  cout<<"삼각형 넓이 : ";
  cout<<CalculateArea(3,4)<<endl;
  cout<<"삼각형 넓이 : ";
  cout<<CalculateArea(3,4,false)<<endl;
  return 0;
}
