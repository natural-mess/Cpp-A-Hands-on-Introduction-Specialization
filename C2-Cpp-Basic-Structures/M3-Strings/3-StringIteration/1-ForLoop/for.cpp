#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "Hello world";

  for (int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i);
  }

  for (char c : my_string) {
    cout << c;
  }

  //add code above this line
  
  return 0;
  
}
