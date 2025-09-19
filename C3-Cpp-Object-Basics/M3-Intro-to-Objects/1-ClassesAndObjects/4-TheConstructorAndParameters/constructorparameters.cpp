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
  
  Actor(string fn, string ln, string bd, int tf) {
    first_name = fn;
    last_name = ln;
    birthday = bd;
    total_films = tf;
    oscar_nominations = 0;
    oscar_wins = 0;
  }
};
  
//add class definitions above this line

int main() {
  
  //add code below this line

  Actor helen("Helen", "Mirren", "July 26", 80);
  cout << helen.oscar_nominations << endl;
  cout << helen.oscar_wins << endl;

  helen.oscar_nominations = 4;
  helen.oscar_wins = 1;

  cout << helen.oscar_nominations << endl;
  cout << helen.oscar_wins << endl;

  //add code above this line
  
  return 0;
  
}
