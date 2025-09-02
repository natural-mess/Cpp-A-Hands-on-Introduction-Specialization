// Use the variable x as you write this program. 
// x will represent a positive integer. 
// Write a program that determines if x is divisible by 5 and is an even number. 
// If yes, print _ is divisible by 5 and even, where the blank (_) is the value of x. 
// If no, print _ is not divisible by 5 or it is odd, where the blank (_) is the value of x.

// Use the to_string(x) function to type cast the variable x as a string.

// If x is 8, then the output should be: 8 is not divisible by 5 or it is odd.
// If x is 80, then the output should be: 80 is divisible by 5 and even.
// If x is 105, then the output should be: 105 is not divisible by 5 or it is odd.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

  if (x % 5 == 0 && x % 2 == 0)
  {
    cout << to_string(x) + " is divisible by 5 and even" << endl;
  }
  else
  {
    cout << to_string(x) + " is not divisible by 5 or it is odd" << endl;
  }

  //add code above this line
  
  return 0;
  
}
