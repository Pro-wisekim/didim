#include <string.h>
#include <stdio.h>
#define MAX_NAME_LEN  20
#define DEF_IQ  100
#define MAX_IQ  300
typedef struct Student Student;
struct Student
{
  int num;
  char name[MAX_NAME_LEN];
  int iq;
};
void Student_Student(Student *stu, int num, const char *name);
void Student_Study(Student *stu, int hours);
void Student_View(Student *stu);
