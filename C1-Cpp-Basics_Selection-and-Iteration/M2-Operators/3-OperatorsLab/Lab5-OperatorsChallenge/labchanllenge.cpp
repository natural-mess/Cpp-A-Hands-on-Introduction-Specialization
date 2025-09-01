// Write a boolean expression that incorporates ONE of the equality operators, 
// ONE of the less than operators, ONE of the greater than operators, 
// and TWO of the logical operators. 
// The result of your overall boolean expression MUST be false. 
//Make sure to use cout << boolalpha << in your code. 
// Otherwise, the system will print 0 or 1 instead of false or true.

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  cout << boolalpha << ((5 > 7) && (false || 1 < 9) || 4 == 5 && ! (2 >= 3)) << endl;

  //add code above this line
  
  return 0;
  
}
