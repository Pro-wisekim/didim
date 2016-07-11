#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string s1 = "hello";
  string s2 = "hello";
  string s3;

  if(s1 == s2){
    cout<<"equal"<<endl;
  }else {
    cout<<"different"<<endl;
  }

  s3 = s1;
  cout<<"s3 is "<<s3<<endl;

  return 0;
}
