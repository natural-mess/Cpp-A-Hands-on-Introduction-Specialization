#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  // char names[3][6] = { "Alan", 
  //                     "Bob", 
  //                     "Carol" };
                      
  // for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
  //   cout << names[i] << endl;
  // }

  const char* names[] = { "Alan", 
                          "Bob", 
                          "ChristopherJones" };
                      
  for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
    cout << names[i] << endl;
  }

  //add code above this line
  
  return 0;
  
}
