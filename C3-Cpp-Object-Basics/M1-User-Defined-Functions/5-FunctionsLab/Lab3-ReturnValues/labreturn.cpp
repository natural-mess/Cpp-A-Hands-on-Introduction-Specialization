#include <iostream>
#include <vector>
using namespace std;

//add code below this line


double input1;
double input2;
double input3;
double input4;
  
/**
 * This function returns the slope between two sets
 * of coordinate points by calculating their coordinate
 * changes separately
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return A string expression of the slope in rise / run format
 */
string GetSlope(double x1, double y1, 
                double x2, double y2) {
  double y_change = y2 - y1;
  double x_change = x2 - x1;
  return to_string(y_change) + " / " + to_string(x_change);
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
  
  cout << GetSlope(input1, input2, input3, input4) << endl;
  //prints what is returned by the GetSlope() function
}

//add code above this line
