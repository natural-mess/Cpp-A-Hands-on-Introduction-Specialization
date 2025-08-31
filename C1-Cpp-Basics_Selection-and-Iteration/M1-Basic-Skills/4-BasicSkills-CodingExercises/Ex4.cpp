// Declares a double variable called my_double.
// Initializes my_double to the value of 3.14.
// Prints the value of my_double.
// Re-assigns my_double to the value of number.
// Prints the value of my_double.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double number = atof(argv[1]);
  
  //add code below this line
  double my_double = 3.14;
  cout << my_double << endl;
  my_double = number;
  cout << my_double << endl;


  //add code above this line
  
  return 0;
  
}
