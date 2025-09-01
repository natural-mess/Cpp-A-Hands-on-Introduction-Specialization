#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  cout << boolalpha << (false && /*C++ never reaches this line*/ true) << endl; 

  cout << boolalpha << (true || /*C++ never reaches this line*/ false) << endl;

  //add code above this line
  
  return 0;
  
}
