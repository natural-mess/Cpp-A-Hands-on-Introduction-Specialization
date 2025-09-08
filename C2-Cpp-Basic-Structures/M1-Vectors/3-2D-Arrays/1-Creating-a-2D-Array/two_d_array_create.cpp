#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string names[3][5];

  cout << sizeof(names) / sizeof(names[0]) << " rows" << endl;
  cout << sizeof(names[0]) / sizeof(string) << " columns" << endl;

  //add code above this line
  
  return 0;
  
}