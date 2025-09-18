#include <iostream>
using namespace std;

//add code below this line

string my_var = "global scope";

void PrintScope(string my_var) {
  my_var = "local scope";
  cout << my_var << endl;
}

int main() {
  PrintScope(my_var);
  cout << my_var << endl;
}

//add code above this line
