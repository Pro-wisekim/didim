#include <string>
#include <iostream>
using namespace std;

class Complex
{
  double image;//허수
  double real;//실수
public:
  Complex(double real=0, double image=0);
  double GetImage()const;
  double GetReal()const;
  void SetImage(double image);
  void SetReal(double real);
  void View()const;
};
