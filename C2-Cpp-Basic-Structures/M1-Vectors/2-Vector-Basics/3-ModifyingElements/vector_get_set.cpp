#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  // vector<string> contact(0);
  // contact.push_back("First name");
  // contact.push_back("Last name");
  // contact.push_back("Phone number");
  // cout << contact.at(0) << " " 
  //     << contact.at(1) << " " 
  //     << contact.at(2) << endl;

  // contact.at(2) = "Email"; //change element at index 2 to "Email"
  // cout << contact.at(0) << " " 
  //     << contact.at(1) << " " 
  //     << contact.at(2) << endl;

  vector<string> contact{"First name", "Last name", "Phone number"};
  cout << contact.at(0) << " " 
      << contact.at(1) << " " 
      << contact.at(2) << endl;

  contact.at(2) = "Email"; //change element at index 2 to "Email"
  cout << contact.at(0) << " " 
      << contact.at(1) << " " 
      << contact.at(2) << endl;

  //add code above this line
  
  return 0;
  
}