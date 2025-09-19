#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  
  string s = "I am a string";
  cout << "s is a: " << typeid(s).name() << endl;

  int arr[1];
  cout << "arr is a: " << typeid(arr).name() << endl;
 
  //add code above this line
  
  return 0;
  
}
