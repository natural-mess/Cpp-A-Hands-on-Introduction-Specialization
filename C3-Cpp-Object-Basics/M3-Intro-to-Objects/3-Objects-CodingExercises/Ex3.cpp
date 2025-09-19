// Define the class Superhero. The class should have a constructor that accepts the following arguments (in this order):
// name- string with the name of the super hero, e.g. "Spider-Man"
// identity - string with the true name of the hero, e.g. "Peter Parker"
// powers - a vector of strings with each element representing a power, see vector example below
#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line
    
class Superhero {
  public:
    string name;
    string identity;
    vector<string> powers;

  Superhero (string n, string i, vector<string> p)
  {
    name = n;
    identity = i;
    powers = p;
  }
};
  
//add class definitions above this line

int main() {

  Superhero iron_man("Iron Man", "Tony Stark", {"armored suit", "laser beams", "flight"});
  cout << iron_man.name << endl;
  cout << iron_man.identity << endl;
  for (auto a : iron_man.powers) {
    cout << a << endl;
  }

  return 0;
  
}
