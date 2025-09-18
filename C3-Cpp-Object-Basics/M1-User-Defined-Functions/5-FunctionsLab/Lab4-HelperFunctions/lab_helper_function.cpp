#include <iostream>
#include <math.h>
#define M_PI  3.14159265358979323846 /* pi */
#include <vector>
using namespace std;

//add code below this line

double input1;
double input2;
double input3;
double input4;
  
/**
 * This function returns the difference in y values
 * 
 * @param y1 A double of the first y-coordinate
 * @param y2 A double of the second y-coordinate
 * @return The difference of y1 and y2 as a double
 */
double GetRise(double y1, double y2) {
  return y2 - y1;
}

/**
 * This function returns the difference in x values
 * 
 * @param x1 A double of the first x-coordinate
 * @param x2 A double of the second x-coordinate
 * @return The difference of x1 and x2 as a double
 */
double GetRun(double x1, double x2) {
  return x2 - x1;
} 

/**
 * This function returns the slope in decimal form
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return A double expression of the slope
 */
double GetSlopeDecimal(double x1, double y1, 
                       double x2, double y2) {
  return GetRise(y1, y2) / GetRun(x1, x2);
}

/**
 * This function returns the slop in fraction form
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return A string expression of the slope in rise / run format
 */
string GetSlopeFraction(double x1, double y1, 
                        double x2, double y2) {
  return to_string(GetRise(y1, y2)) + " / " + to_string(GetRun(x1, x2));
}
  
int main() {
  cout << "Enter first x coordinate: " << endl;
  cin >> input1;
  cout << "Enter first y coordinate: " << endl;
  cin >> input2;
  cout << "Enter second x coordinate: " << endl;
  cin >> input3;
  cout << "Enter second y coordinate: " << endl;
  cin >> input4;
  
  cout << "Rise: ";
  cout << GetRise(input2, input4) << endl;
  cout << "Run: ";
  cout << GetRun(input1, input3) << endl;
  cout << "Calculated form: ";
  cout << GetSlopeDecimal(input1, input2, input3, input4) << endl;
  cout << "Slope form: ";
  cout << GetSlopeFraction(input1, input2, input3, input4) << endl;
}

//add code above this line
