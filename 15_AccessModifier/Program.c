#include "Student.h"
int main()
{
  Student stu;
  Student_Student(&stu, 34, "홍길동");
  Student_View(&stu);
  Student_Study(&stu, 50);
  Student_View(&stu);
  stu.iq += 300;
  Student_View(&stu);
  return 0;
}
