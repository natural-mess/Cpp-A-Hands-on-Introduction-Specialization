#include <iostream>
using namespace std;

//add function definitions below this line

int RecursivePower(int base, int exp)
{
  if (exp < 1)
  {
    return 1;
  }
  return (base * RecursivePower(base, exp-1));
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursivePower(stoi(argv[1]), stoi(argv[2])) << endl;
  return 0;
}
