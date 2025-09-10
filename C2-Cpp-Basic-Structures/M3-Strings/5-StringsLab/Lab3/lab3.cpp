#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string original_string = "THE BROWN DOG JUMPS over the lazy fox!";
  string modified_string;

  for (char ch : original_string) {
    if (islower(ch)) {
      modified_string += toupper(ch);
    }
    else {
      modified_string += tolower(ch);
    }
  }

  cout << "The original string is: " + original_string << endl;
  cout << "The modified string is: " + modified_string << endl;

  //add code above this line
  
  return 0;
  
}
