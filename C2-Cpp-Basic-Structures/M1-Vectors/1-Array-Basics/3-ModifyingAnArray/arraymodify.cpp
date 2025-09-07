#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  int grades[] = {85, 95, 48, 100, 92};
  cout << grades[2] << endl;

  grades[2] = 88; //88 will replace 48 at index 2
  cout << grades[2] << endl;

  string family[] = {"Dad", "Mom", "Brother", "Sister"};
  int age[4];

  cout << family[0] << " " << age[0] << endl;
  cout << family[1] << " " << age[1] << endl;
  cout << family[2] << " " << age[2] << endl;
  cout << family[3] << " " << age[3] << endl;

  //add code above this line
  
  return 0;
  
}