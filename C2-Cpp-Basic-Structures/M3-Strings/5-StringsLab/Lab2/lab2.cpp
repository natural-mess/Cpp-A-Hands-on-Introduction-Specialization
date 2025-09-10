#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "The brown dog jumps over the lazy fox";

  for (int i = my_string.length()-1; i >= 0; i--) {
    cout << my_string.at(i);
  }

  //add code above this line
  
  return 0;
  
}
