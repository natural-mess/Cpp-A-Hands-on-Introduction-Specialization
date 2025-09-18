// Write a function called IsPalindrome() that takes a string as a parameter. 
// If the string is a palindrome (a word that is spelled the same forward and backward), 
// then the function will return a boolean of true. If the string is not a palindrome, 
// then false is returned. Note that capitalization matters. 
// For example, "Level" would not be considered a palindrome because uppercase "L" and lowercase "l" are not the same.

#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool IsPalindrome(string x)
{
  int i=0;
  int j=x.length() - 1;
  while (i<=j)
  {
    if (x[i] != x[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}