#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  sstring top[] = {"First: ", "Second: ", "Third: ", "Fourth: ", "Fifth: "};
  vector<string> names(0);

  names.push_back("Alan");
  names.push_back("Bob");
  names.push_back("Carol");
  names.push_back("David");
  names.push_back("Ellen");
    
  names.at(0) = "Carol"; //switch Alan with Carol
  names.at(2) = "Alan";  //and vice versa

  names.at(3) = "Fred"; //Fred replaces David
    
  names.insert(names.begin()+4, "Grace"); //Grace takes Ellen's place
  names.pop_back(); //Ellen's "Sixth" place gets removed

  for (int i = 0; i < 5; i++) {
    cout << top[i] << names.at(i) << endl;
  }

  //add code above this line
  
  return 0;
  
}