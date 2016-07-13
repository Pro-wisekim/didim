#include <iostream>
using namespace std;
//오버로딩 문제
int Add(int &r1, int &r2);
int Add(int i, int j);

int main()
{
  int re = Add(2,3);
  cout<<"re: "<<re<<endl;

  int a=2, b=3;
  re = Add(a,b);
  cout<<"re:"<<re<<endl;
  
  return 0;
}
int Add(int &r1, int &r2)
{
  return r1+r2;
}
int Add(int i, int j)
{
  return i+j;
}


/*
//참조 변수의 바뀜
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
*/


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
