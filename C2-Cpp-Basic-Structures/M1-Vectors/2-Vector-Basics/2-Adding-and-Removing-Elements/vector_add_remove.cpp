#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  // vector<int> numbers(0); //vector with no elements
  // numbers.push_back(50); //add 50 as an element to end of vector

  // cout << numbers.at(0) << endl; //50 becomes first and only element

  // numbers.push_back(50); //add 50 as an element to end of vector

  // vector<int> numbers(2);
  // numbers.insert(numbers.begin()+1, 50); //add 50 to index 1
  // cout << numbers.at(0) << endl;
  // cout << numbers.at(1) << endl;
  // cout << numbers.at(2) << endl;

  // numbers.insert(numbers.begin()+1, 100); //add 100 to index 1
  // cout << numbers.at(0) << endl;
  // cout << numbers.at(1) << endl;
  // cout << numbers.at(2) << endl; //50 now becomes index 2

  // vector<int> numbers(0); //empty vector
  // numbers.push_back(50); //add 50 to vector
  // numbers.push_back(100); //add 100 to vector
  // cout << numbers.at(0) << endl;
  // cout << numbers.at(1) << endl << endl;

  // numbers.pop_back(); //remove last element vector
  // cout << numbers.at(0) << endl;
  // cout << numbers.at(1) << endl; //100 has been deleted completely

  vector<int> numbers(0); //empty vector
  numbers.push_back(50); //add 50 to vector
  numbers.push_back(100); //add 100 to vector
  cout << numbers.at(0) << endl;
  cout << numbers.at(1) << endl << endl;

  numbers.erase(numbers.begin()); //removes 50
  cout << numbers.at(0) << endl;
  cout << numbers.at(1) << endl; //no longer exists

  //add code above this line
  
  return 0;
  
}