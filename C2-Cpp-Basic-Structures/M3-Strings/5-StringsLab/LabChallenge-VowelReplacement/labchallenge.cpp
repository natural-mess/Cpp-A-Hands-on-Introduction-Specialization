#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  char ch;
  
  //add code below this line

  for (int i = 0; i < my_string.length(); i++) {
    ch = my_string.at(i);
    if (ch == 'a' || ch == 'e' || ch == 'i' || 
        ch == 'o' || ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' || ch == 'O' ||
        ch == 'U') {
      my_string.at(i) = '*';
    }
  }

  cout << my_string << endl;


  //add code above this line
  
  return 0;
  
}