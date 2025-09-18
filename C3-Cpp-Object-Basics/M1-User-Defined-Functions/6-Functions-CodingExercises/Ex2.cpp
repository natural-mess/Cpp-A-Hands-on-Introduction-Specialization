// Write a function called GetOddsEvens() that takes a string and an int vector as parameters. 
// If the string parameter is "true", print only the even integers separated by a newline. 
// If the string parameter is "false", print only the odd integers separated by a newline. 
// Else, no output will be printed and you will see the default message of Command was successfully executed..

#include <iostream>
#include <vector>
using namespace std;

//add code below this line

void GetOddsEvens(string x, vector<int>& y)
{
  if (x == "true" )
  {
    for (auto num : y)
    {
      if (num % 2 == 0)
      {
        cout << num << endl;
      }
    }
  }
  else if (x == "false")
  {
    for (auto num : y)
    {
      if (num % 2 != 0)
      {
        cout << num << endl;
      }
    }
  }
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}