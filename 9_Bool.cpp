#include <iostream>
using namespace std;
//조건식, 반복문에서의 조건 표현 등에서 논리 형식을 사용하면 가독성 높은 코드를 작성할 수 있다.
bool IsEvenNumber(int num);

int main()
{
  bool check = false;
  int num = 0;
  
  cout<<"아무 수나 입력 하세요."<<endl;
  cin>>num;

  check = IsEvenNumber(num);

  if(check) {
    cout<<num<<"은(는) 짝수 입니다."<<endl;
  }else {
    cout<<num<<"은(는) 홀수 입니다."<<endl;
  }
  return 0;
}

bool IsEvenNumber(int num)
{
  return (num%2) == 0;
}
