#include <iostream>
using namespace std;

int main() {

  int age1 = 12;
  int age2 = 31;
  int age3 = 29;
  int* amy;
  int* bob;
  int** carol;
  
  //add code below this line
  
  amy = &age1;
  bob = &age2;
  int *pAge3 = &age3;
  carol = &pAge3;
  
  cout << "Amy's age is: ";
  cout << *amy << endl; //do not edit
  cout << "Bob's age is: ";
  cout << *bob << endl; //do not edit
  cout << "Carol's age is: ";
  cout << **carol << endl; //do not edit
  
  
  //add code above this line 
  
  return 0;
  
}