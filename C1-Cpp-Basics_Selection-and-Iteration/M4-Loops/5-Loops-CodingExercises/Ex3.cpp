// You are trying to produce a program that takes in two integer arguments from the user 
// and then prints the consecutive sum of all numbers between those integers inclusively. 
// For example, arguments 5 and 8 will result in a sum of 26 (5 + 6 + 7 + 8 = 26). 
// If the integer arguments are the same value, the program will simply print that value as the sum.
// Requirements
// Declare and initialize a variable to keep tracking of your sum.
// Use any loop to find the consective sum between the integer variables a and b.
// If a and b are the same integers, then print either a or b as the sum.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line
  int sum = 0;
  for (int i=a; i<=b; i++)
  {
    sum += i;
  }
  cout << sum;

  //add code above this line
  
  return 0;
  
}
