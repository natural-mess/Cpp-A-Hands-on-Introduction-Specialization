#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "Today is Satur";
  // my_string.push_back('d');  

  cout << my_string << endl;

  my_string.insert(my_string.length(), "day");
  my_string.insert(9, "a good ");
  // my_string.insert(0, "day");

  cout << my_string << endl;  

  //add code above this line
  
  return 0;
  
}
