#include <iostream>
using namespace std;
#include "point.h"
#include "slope.h"

int main() {
  
  //add code below this line

  point a;
  point b;
  a.x = 0;
  a.y = 0;
  b.x = 2;
  b.y = 2;
  cout << Slope::CalculateSlope(a, b) << endl;

  //add code above this line
  
  return 0;
  
}