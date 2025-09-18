#include <iostream>
using namespace std;

//add code below this line

string greeting = "Hello";

void SayHello1() {
  greeting = "Bonjour";
  cout << greeting << endl;
}

void SayHello2() {
  cout << greeting << endl;
}

int main() {
  SayHello1();
  SayHello2();
  return 0;
}

//add code above this line
