// Use the variable x as you write this program. 
// x will represent a string. 
// Write a program that determines if x is a primary color (red, blue, or yellow). 
// If yes, print _ is a primary color, where the blank (_) is the value of x. 
// If no, print _ is not a primary color, where the blank (_) is the value of x. 
// For this particular exercise, 
// make sure that your code specifically checks if the variable x is equivalent to the strings red, blue, or yellow in all lowercase.
// Otherwise, your test cases will fail.

// There is a difference between all of the following strings: 
// "red", "Red", and "RED". 
// When comparing strings, the system is case-sensitive 
// and will attempt to match each character of the strings to each other based on whether it is uppercase or lowercase.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

  if (x == "red" || x == "blue" || x == "yellow")
  {
    cout << x + " is a primary color" << endl;
  }
  else
  {
    cout << x + " is not a primary color" << endl;
  }

  //add code above this line
  
  return 0;
  
}
