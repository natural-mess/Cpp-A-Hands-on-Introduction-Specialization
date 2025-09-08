#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  int a = 5; //regular int variable set to 5
  int* p = &a; //int pointer points to a's memory address

  cout << *p << endl; //dereference p to print its content

  int** p2 = &p;
  cout << **p2 << endl;

  int array[] = {24, 52, 97};

  cout << *array << endl;

  //add code above this line
  
  return 0;
  
}
