// Write a recursive function called ReverseString() that takes a string as a parameter. 
// Then it returns the string in reverse order.
#include <iostream>
using namespace std;

//add function definitions below this line

string ReverseString(string inputStr)
{
  if (inputStr.length() == 1)
  {
    return inputStr;
  }
  return inputStr.substr(inputStr.length() - 1) + ReverseString(inputStr.substr(0, inputStr.length()-1));
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
