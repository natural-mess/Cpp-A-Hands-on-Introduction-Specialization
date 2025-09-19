// Write a recursive function called RecursiveSum() that takes an integer as a parameter. 
// Then it returns the sum of all integers between 0 and the integer passed to RecursiveSum(). 
// For example, if the argument is 5, then the returned value will be 0 + 1 + 2 + 3 + 4 + 5 which is 15.

#include <iostream>
using namespace std;

//add function definitions below this line

int RecursiveSum(int num)
{
  if (num < 1)
  {
    return 0;
  }
  return num + RecursiveSum(num-1);
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}
