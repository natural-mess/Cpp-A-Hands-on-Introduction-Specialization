#include <iostream>
using namespace std;

//add class definitions below this line

class Actor {
  public:
    string first_name;
    string last_name;
    string birthday;
    int total_films;
    int oscar_nominations;
    int oscar_wins;
  
  Actor() {
    first_name = "Helen";
    last_name = "Mirren";
    birthday = "July 26";
    total_films = 80;
    oscar_nominations = 4;
    oscar_wins = 1;
  }
};

//add class definitions above this line   

int main() {
  
  //add code below this line

  Actor helen;
  cout << helen.first_name + ' ' + helen.last_name << endl;
    
  //add code above this line
  
  return 0;
  
}
