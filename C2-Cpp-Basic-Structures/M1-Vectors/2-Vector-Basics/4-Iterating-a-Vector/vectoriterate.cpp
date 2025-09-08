#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  //iterating through an vector
  vector<int> grades{85, 95, 48, 100, 92};

  for (int i = 0; i < grades.size(); i++) {
    cout << grades.at(i) << endl;
  }

  for (auto i : grades) { //can use int or auto for iterating variable!
    cout << i << endl;
  }

  //add code above this line
  
  return 0;
  
}