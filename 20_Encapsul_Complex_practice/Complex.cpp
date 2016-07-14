#include "Complex.h"
Complex ::Complex(double real, double image)
{
  SetReal(real);
  SetImage(image);
}

double Complex::GetImage()const
{
  return image;
}

double Complex::GetReal()const
{
  return real;
}

void Complex::SetImage(double image)
{
  this->image = image;
}

void Complex::SetReal(double real)
{
  this->real = real;
}

void Complex::View()const
{
  if((real != 0) && (image != 0))
  {
    cout<<real<<"+"<<image<<"i"<<endl;
  }
  else
  {
    if(image != 0)
    {
      cout<<image<<"i"<<endl;
    }
    else
    {
      cout<<real<<endl;
    }
  }
}


