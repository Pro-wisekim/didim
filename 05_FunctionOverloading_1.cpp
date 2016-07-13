#include <iostream>
using namespace std;

long Add(long a, long b)
{
  return a-b;
}

short Add(short a, short b)
{
  return a-b;
}

int main(void)
{
  Add(2,3);
  return 0;
}
