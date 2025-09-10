#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "The Brown Dog Jumps Over The Lazy Fox";
  char ch;
  int count = 0;

  for (int i = 0; i < my_string.length(); i++) {
    ch = my_string.at(i);
    if (ch == 'a' || ch == 'e' || ch == 'i' || 
        ch == 'o' || ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' || ch == 'O' ||
        ch == 'U') {
      count += 1;
    }
  }

  if (count == 0) {
    cout << "There are no vowels in the string." << endl;
  }
  else if (count == 1) {
    cout << "There is 1 vowel in the string." << endl;
  }
  else {
    cout << "There are " << count << " vowels in the string." << endl;
  }

  //add code above this line
  
  return 0;
  
}
