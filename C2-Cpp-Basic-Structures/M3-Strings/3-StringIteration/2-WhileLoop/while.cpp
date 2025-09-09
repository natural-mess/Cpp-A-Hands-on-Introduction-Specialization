#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "Calvin and Hobbes";
  int i = 0;

  while (i < my_string.length()) {
    cout << my_string.at(i);
    i++;
  }

  //add code above this line
  
  return 0;
  
}
