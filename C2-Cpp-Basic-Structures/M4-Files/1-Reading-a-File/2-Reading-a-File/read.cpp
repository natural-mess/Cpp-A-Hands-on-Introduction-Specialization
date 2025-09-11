#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/readpractice.txt";

  try {
    ifstream file;
    string read; //create string to store what is read into
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read)) {
      cout << read << endl;;
    }
    file.close();
    cerr << "File successfully opened and closed." << endl;
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  try {
    ifstream file;
    char ch; //create string to store what is read into
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (file.get(ch)) {
      cout << ch;
    }
    file.close();
    cerr << "File successfully opened and closed." << endl;
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
