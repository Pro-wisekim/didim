#include <iostream>

using namespace std;

namespace DemoLib
{
  struct Stack
  {
    int top;
  };
  struct Queue
  {
    int front; 
    int rear;
  };
}
using namespace DemoLib;
/*
namespace DemoA
{
  struct Stack
  {
    int top;
  };
}

namespace DemoB
{
  struct Stack
  {
    int last;
  };
}
*/
int main(void)
{
  Stack s;
  Queue q;
  s.top = -1;
  q.front = q.rear = 0;
  /*
  DemoA::Stack stacka;
  DemoB::Stack stackb;

  stacka.top = -1;
  stackb.last = -1;
*/
  cout<<s.top<<endl;
  
  return 0;
}
