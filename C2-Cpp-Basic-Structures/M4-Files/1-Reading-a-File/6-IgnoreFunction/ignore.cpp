#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/readpractice.txt";

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file.ignore(30); //ignore all chars before index 30
    while (getline(file, read)) {
      cout << read << endl;
    }
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
