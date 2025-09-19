// Define the class PracticeClass. 
// It should have only a single string attribute name. 
// This class should not have a constructor.

#include <iostream>
using namespace std;

//add class definitions below this line
    
class PracticeClass {
  public:
    string name;
};
  
//add class definitions above this line

int main() {
  
  PracticeClass obj;
  obj.name = "Class Object";
  cout << obj.name;
  
  return 0;
  
}
