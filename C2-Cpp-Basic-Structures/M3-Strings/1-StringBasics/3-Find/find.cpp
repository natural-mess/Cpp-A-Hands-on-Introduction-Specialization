#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "The brown dog jumps over the lazy fox.";

  cout << my_string.find("dog") << endl;

  cout << my_string.find("he", 4) << endl; //start at index 4

  //add code above this line
  
  return 0;
  
}
