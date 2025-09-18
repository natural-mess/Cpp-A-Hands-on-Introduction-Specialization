#include <iostream>
#include <vector>
using namespace std;

//add code below this line

/**
 * This function prints the slope between two sets
 * of coordinate points
 * 
 * @param x1 A double of the first x-coordinate
 * @param y1 A double of the first y-coordinate
 * @param x2 A double of the second x-coordinate
 * @param y2 A double of the second y-coordinate
 * @return No return value
 */
void GetSlope(double x1, double y1, double x2, double y2) {
  cout << (y2 - y1) / (x2 - x1) << endl;
}

int main() {
  GetSlope(3, 2, 5, 6);
  return 0;
}

//add code above this line
