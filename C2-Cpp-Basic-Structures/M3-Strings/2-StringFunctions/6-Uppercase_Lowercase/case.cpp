#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "the big brown dog";

  cout << char(toupper(my_string.at(0))) << endl;

  my_string = "THE BIG BROWN DOG";

  cout << char(tolower(my_string.at(1))) << endl;

  //add code above this line
  
  return 0;
  
}
