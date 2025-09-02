// Use the variable x as you write this program. 
// x will represent a positive integer. 
// Write a program that determines if x is divisible by 5. 
// If yes, print _ is divisible by 5, where the blank (_) is the value of x. 
// If no, print _ is not divisible by 5, where the blank (_) is the value of x.

// Use the to_string(x) function to type cast the variable x as a string.

// If x is 50, then the output should be: 50 is divisible by 5.
// If x is 37, then the output should be: 37 is not divisible by 5.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

  if (x % 5 == 0)
  {
    cout << to_string(x) + " is divisible by 5" << endl;
  }
  else
  {
    cout << to_string(x) + " is not divisible by 5" << endl;
  }

  //add code above this line
  
  return 0;
  
}
