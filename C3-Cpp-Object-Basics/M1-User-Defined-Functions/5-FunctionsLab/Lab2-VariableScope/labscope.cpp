#include <iostream>
#include <vector>
using namespace std;

//add code below this line


double input1; //global
double input2; //global
double input3; //global
double input4; //global

/**
 * This function prints the slope between two sets
 * of coordinate points by calculating their coordinate
 * changes separately
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return No return value
 */
void GetSlope(double x1, double y1, double x2, double y2) {
  double y_change = y2 - y1;
  double x_change = x2 - x1;
  cout << y_change / x_change << endl;
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

  GetSlope(input1, input2, input3, input4);
}

//add code above this line
