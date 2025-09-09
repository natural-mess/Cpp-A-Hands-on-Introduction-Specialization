// You are working to create a program that takes in two double inputs, 
// associates them with pointers, and then adds the value of the dereferenced pointers together. 
// Finally, their sum is printed with a newline.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double a;
  double b;
  double *p1;
  double *p2;
  
  cout << "Enter the first number: " << endl;
  cin >> a;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  cout << "Enter the second number: " << endl;
  cin >> b;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  
  // your code goes below
  
  p1 = &a;
  p2 = &b;
  cout << "The sum is ";
  
  // your code goes above
  
  cout << *p1 + *p2 << endl;
  
  return 0;
  
}