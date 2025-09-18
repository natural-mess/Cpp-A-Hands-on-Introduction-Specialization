// Write a function called FindTerm() that takes a string term and a string vector as parameters. 
// If the term exists inside the vector, then a boolean value of true is returned. 
// Else, the term does not exist and false is returned. Note that capitalization matters. 
// For example, "cat"and "Cat" are not considered the same term.

#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool FindTerm (string x, vector<string>& y)
{
  for (auto term : y)
  {
    if (x == term)
    {
      return true;
    }
  }
  return false;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}