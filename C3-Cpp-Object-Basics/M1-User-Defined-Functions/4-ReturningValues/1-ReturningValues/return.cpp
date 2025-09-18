#include <iostream>
#include <vector>
using namespace std;

//add code below this line

/**
 * This function adds two integers together
 * 
 * @param x The first integer
 * @param y The second integer
 * @return x added to y
 */
int ReturnInt(int x, int y) { //int function
  return(x + y);
}

/**
 * This function adds two doubles together
 * 
 * @param x The first double
 * @param y The second double
 * @return x added to y
 */
double ReturnDouble(double x, double y) { //double function
  return(x + y);
}

/**
 * This function adds two strings together
 * 
 * @param x The first string
 * @param y The second string
 * @return x added to y
 */
string ReturnString(string x, string y) { //string function
  return(x + y);
}


void MultiplyFive(vector<int>& my_list) {
  vector<int> new_list;
  for (auto a : my_list) {
    new_list.push_back(a * 5);
  }
  for (auto a : new_list) {
    cout << a << endl;
  }
}


int main() { //int function
  cout << ReturnInt(1, 2) <<endl;
  cout << ReturnDouble(1, 2) <<endl;
  cout << ReturnString("1", "2") << endl;

  vector<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_back(4);
  numbers.push_back(5);

  MultiplyFive(numbers);
  return 0;
}

//add code above this line
