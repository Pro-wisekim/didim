#include "Student.h"
void Student_Student(Student *stu, int num, const char *name)
{
  stu->num = num;
  strcpy(stu->name, name);
  stu->iq = DEF_IQ;
}
void Student_Study(Student *stu, int hours)
{
  printf("%s 학생 %d시간 공부하다.\n", stu->name, hours);
  if(stu->iq + hours >MAX_IQ)
  {
    stu->iq = MAX_IQ;
  }
  else
  {
    stu-> iq += hours;
  }
}
void Student_View(Student *stu)
{
  printf("번호:%d, 이름:%s, 아이큐:%d\n", stu->num, stu->name, stu->iq);
}
