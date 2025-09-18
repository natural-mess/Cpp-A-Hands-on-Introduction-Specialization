// Like in Exercise 4, your task is to develop a function called IsPalindrome() 
// that takes a string as a parameter. If the string is a palindrome (a word that is spelled the same forward and backward), 
// then the function will return a boolean of true. If the string is not a palindrome, then false is returned. 
// The difference between this exercise and Exercise 4, however, 
// is that you will need to use a helper function called Reverse() within IsPalindrome(). 
// The Reverse() function takes a string as a parameter and reverses it. Then the reversed string is returned.

#include <iostream>
#include <vector>
using namespace std;

string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}

//add code below this line

bool IsPalindrome(string x)
{
  string y = Reverse(x);
  if (x == y)
  {
    return true;
  }
  return false;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
