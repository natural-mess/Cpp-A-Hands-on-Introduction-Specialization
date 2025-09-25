// Create a struct called Student and set it up so the code in main will print the expected output below.

#include <iostream>
using namespace std;

//add definitions below this line

struct Student {
  string name = "Amy", major = "Physics";
  int age = 18;
};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Student amy;
  cout << amy.name << endl;
  cout << amy.age << endl;
  cout << amy.major << endl;
  
  cout << endl;
  
  Student adam;
  adam.name = "Adam";
  adam.age = 19;
  adam.major = "Computer Science";
  cout << adam.name << endl;
  cout << adam.age << endl;
  cout << adam.major << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}