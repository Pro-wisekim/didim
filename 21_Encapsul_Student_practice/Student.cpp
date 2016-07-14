//Student.cpp
#include "Student.h"

const string Student::titles[MAX_SUBJECT] = {"국어", "영어", "수학"};
int Student::last_num;

int Student::GetStuCount()
{
  return last_num;
}

Student::Student(string name):num(++last_num)
{
  this->name = name;
  for(int si = 0; si < MAX_SUBJECT; si++)
  {
    SetScore(si, -1, 0);
  }
}

bool Student::SetScore(int sindex, int score)
{
  if(AvailSIndex(sindex))//과목 번호가 유효할 때
  {
    return SetScore(sindex, score, 0);
  }
  return false;
}

int Student::GetScore(int sindex)const
{
  if(AvailSIndex(sindex))//과목 번호가 유효할 때
  {
    return scores[sindex];
  }
  return -1;
}

int Student::GetTotal()const
{
  int sum = 0;
  for(int i = 0; i < MAX_SUBJECT; i++)
  {
    if(scores[i] != -1)//성적 입력 상태일 때만
    {
      sum += scores[i];//합계에 더함
    }
  }
  return sum;
}

double Student::GetAverage()const
{
  return GetTotal()/(double)(MAX_SUBJECT);
}

bool Student::AvailSIndex(int sindex)const//과목 인덱스가 유효한지
{
  return (sindex >= 0) && (sindex < MAX_SUBJECT);
}

void Student::View()const
{
  cout<<"번호:"<<num<<"    이름:"<<name<<endl;
  for(int i = 0; i < MAX_SUBJECT; i++)
  {
    if(scores[i] == -1)
    {
      cout<<titles[i]<<":입력 안 함"<<endl;
    }
    else
    {
      cout<<titles[i]<<":"<<scores[i]<<endl;
    }
  }
  cout<<"총점:"<<GetTotal()<<"    평균:"<<GetAverage()<<endl;
  cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

bool Student::SetScore(int sindex, int score, int)
{
  if((score < 0) || (score > 100))//성적 범위를 벗어나면
  {
    scores[sindex] = -1;
    return false;
  }
  scores[sindex] = score;
  return true;
}
