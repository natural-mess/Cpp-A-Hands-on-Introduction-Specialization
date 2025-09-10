// Write a program that takes input from a user and prints the first 
// character of the input and the last character with some context. 
// For example, if baseball is the string, then the program will output 
// b is the first character and l is the last character. 
// If cat is the string, then c is the first character and t is the last character will be printed.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

  cout << my_string.at(0) << " is the first character and " << my_string.at(my_string.length()-1) << " is the last character" << endl;

  //add code above this line
  
  return 0;
  
}