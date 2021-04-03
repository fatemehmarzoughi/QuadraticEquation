
#include <iostream>
#include <stdlib.h>
#include <cmath>
bool QuadraticFormula(float a, float b, float c, float & r1, float & i1, float & r2, float & i2)
{
  float sqrtfValue = b*b - 4*a*c;
  if(sqrtfValue < 0)
  {
    //make it possitive
    r1 = (-b ) / 2 * a;
    i1 = sqrtf(fabsf(sqrtfValue)) / 2 * a;
    r2 = (-b ) / 2 * a;
    i2 = -sqrtf(fabsf(sqrtfValue)) / 2 * a;
  }
  else
  {
    r1 = (-b + sqrtf(sqrtfValue)) / 2 * a;
    r2 = (-b - sqrtf(sqrtfValue)) / 2 * a;
    i1 = 0;
    i2 = 0;
  }
  return 0;
}

int main()
{

  float r1 = 0;
  float r2 = 0;
  float i1 = 0;
  float i2 = 0;
  QuadraticFormula(1 , 2 , 5 , r1 , i1 , r2 , i2);
  std::cout<<"Coefficients a = "<<1<<" b = "<<2<<" c = "<<5<<"  yield S1 = "<<r1<<" + ("<<i1<<"i)"<<", and S2 = "<<r2<<" + ("<<i2<<"i)";

  return 0;
}
