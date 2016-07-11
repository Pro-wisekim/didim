#include <iostream>
using namespace std;
/*
enum Gender
{
  FEMALE, MALE
};

enum Gender g = 3;
//신뢰성 강화 : 열거형 변수에 정수형을 대입 및 초기화 불가
//열거형에 나열한 값을 사용할 수 없기 때문에 발생 하는 것
//특히 열거형에 열거한 값이라도 정수 형식을 대입할 수 없다.
//컴파일러는 변수의 형식으로 오류를 검사하는 것이지 값으로 검사하지 않기 때문
//but, 정수 형식 변수에 열거형을 대입하은 것은 가능
*/

enum Subject
{
  KOREAN, ENGLISH, MATH, MAX_SUBJECT
};

enum ScoreConst
{
  DEF_SCORE = -1, MIN_SCORE = 0, MAX_SCORE = 100
};

int main(void)
{
  const char *titles[MAX_SUBJECT] = {"국어", "영어", "수학"};
  int scores[MAX_SUBJECT] = {DEF_SCORE, DEF_SCORE, DEF_SCORE};

  scores[KOREAN] = 90;
  scores[ENGLISH] = MAX_SCORE;
  scores[MATH] = MIN_SCORE;

  for(int si = 0; si < MAX_SUBJECT; si++)
  {
    cout<<titles[si]<<":"<<scores[si]<<endl;
  }

  return 0;
}
