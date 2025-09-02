// Use the variable x as you write this program. 
// x will represent a positive integer. 
// Write a program that determines if x is between 0 and 25 or between 75 and 100. 
// If yes, print the message:_ is between 0 and 25 or 75 and 100, where the blank (_) will be the value of x. 
// The program should do nothing if the value of x does not fit into either ranges.

// These are inclusive ranges - meaning if x is 0, 25, 75, or 100, 
// the program should print out the message.

// Use the to_string(x) function to type cast the variable x as a string.
// If x is 8, then the output should be: 8 is between 0 and 25 or 75 and 100.
// If x is 80, then the output should be: 80 is between 0 and 25 or 75 and 100.
// If x is 100, then the output should be: 100 is between 0 and 25 or 75 and 100.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

  string message = " is between 0 and 25 or 75 and 100";
  if ((x >= 0 && x <= 25) || (x >= 75 && x <= 100))
  {
    cout << to_string(x) + message << endl;
  }

  //add code above this line
  
  return 0;
  
}
