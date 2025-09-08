#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  vector<int> numbers(3);

  cout << numbers << endl;

  cout << numbers.at(0) << endl;

  cout << numbers.at(3) << endl;
  //index 3 refers to the fourth element, not third, which doesn't exist

  int digits[3];

  cout << numbers.size() << endl;
  cout << sizeof(digits) / sizeof(digits[0]) << endl;

  //add code above this line
  
  return 0;
  
}