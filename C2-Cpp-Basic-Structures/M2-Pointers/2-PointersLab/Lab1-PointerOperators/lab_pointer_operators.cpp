#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  bool b = true;
  bool* p = &b;
  bool** p2 = &p; //p2 points to p

  cout << p2 << endl; //prints p's memory address
  cout << *p2 << endl; //prints p's content which is b's address
  cout << boolalpha << **p2 << endl;
  //p2 is dereferenced twice to print b's value

  //add code above this line
  
  return 0;
  
}
