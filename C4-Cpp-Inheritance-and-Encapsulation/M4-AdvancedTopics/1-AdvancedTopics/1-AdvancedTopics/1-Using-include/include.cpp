// #include <iostream>
// using namespace std;
#include "class.h"

int main() {
  
  //add code below this line

  Greeting g("Hello world");
  cout << g.GetGreeting() << endl;
  g.SetGreeting("Hi world");
  cout << g.GetGreeting() << endl;

  //add code above this line
  
  return 0;
  
}