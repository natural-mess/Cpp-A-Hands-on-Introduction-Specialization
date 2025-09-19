#include <iostream>
using namespace std;

//add class definitions below this line

class Actor {
  public:
    string first_name;
    string last_name;
};

//add class definitions above this line   

int main() {
  
  //add code below this line

  Actor helen;
  helen.first_name = "Helen";
  helen.last_name = "Mirren";
  cout << helen.first_name +  ' ' + helen.last_name << endl;

  //add code above this line
  
  return 0;
  
}
