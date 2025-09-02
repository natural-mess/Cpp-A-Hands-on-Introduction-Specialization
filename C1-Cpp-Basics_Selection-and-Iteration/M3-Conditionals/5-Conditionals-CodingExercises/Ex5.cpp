// Use the variable x as you write this program. x will represent a string. 
// Write a program that determines if x is a vowel (a, e, i, o, or u ). 
// If yes, print _ is a vowel, where the blank (_) is the value of x. 
// If no, print _ is not a vowel, where the blank (_) is the value of x. 
// For this particular exercise, make sure that your code specifically checks if the variable x is equivalent to the strings a, e, i, o, or u in lowercase. 
// Otherwise, your test cases will fail.

// There is a difference between the strings “a” and "A". 
// When comparing strings, the system is case-sensitive and will attempt to match each character of the strings to each other 
// based on whether it is uppercase or lowercase.

// If x is a, then the output should be: a is a vowel.
// If x is z, then the output should be: z is not a vowel.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

  if (x == "a" || x == "e" || x == "i" || x == "o" || x == "u")
  {
    cout << x + " is a vowel" << endl;
  }
  else
  {
    cout << x + " is not a vowel" << endl;
  }

  //add code above this line
  
  return 0;
  
}
