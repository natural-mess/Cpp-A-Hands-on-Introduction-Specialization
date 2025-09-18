// Write a function called GetAvg() that takes two double parameters and 
// returns the average of these two parameters as a double. 
// If either of the parameters is not a double or an integer, 
// the program will catch the exception and print One or more invalid arguments..
#include <iostream>
#include <vector>
using namespace std;

//add code below this line

double GetAvg(double a, double b)
{
  return (a+b)/2;
}

//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}