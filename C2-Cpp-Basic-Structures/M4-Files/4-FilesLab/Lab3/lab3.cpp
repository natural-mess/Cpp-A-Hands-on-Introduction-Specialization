#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/labs/superheroes.csv";
  string name;
  string power;

  try {
    ofstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    
    while (true) {
      cout << "Please enter a superhero name (or enter q to quit): ";
      cin >> name;
      if (name == "q") {
        break;
      }
      cout << "Please enter a superhero power (or enter q to quit): ";
      cin >> power;
      if (power == "q") {
        break;
      }
      file << name << ',' << power;
    }
    
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
