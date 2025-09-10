#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

  int len = my_string.length();

    for (int i = 1; i < len * len + 1; i++) {
    if (i % len == 0) {
        cout << my_string << endl;
    }
    else {
        cout << my_string;
    }
    }

  //add code above this line
  
  return 0;
  
}