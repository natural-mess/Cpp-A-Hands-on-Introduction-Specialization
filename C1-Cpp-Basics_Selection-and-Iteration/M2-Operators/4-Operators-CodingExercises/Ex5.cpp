// Your friend wrote a program called an adder. 
// The adder is supposed to take two numbers inputted by a user and then find the sum of those numbers, 
// but it’s behaving oddly.

#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line

  string sum = to_string(stoi(num1) + stoi(num2));
  cout << ( num1 + " + " + num2 + " = " + sum ) << endl;

  //fix the code above this line
  
  return 0;
  
}
