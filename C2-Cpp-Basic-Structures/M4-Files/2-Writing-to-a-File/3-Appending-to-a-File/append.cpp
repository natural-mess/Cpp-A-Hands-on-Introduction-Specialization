#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  string path = "student/text/practice3.txt";

  try {
    fstream file;              // use fstream
    file.open(path, ios::out); // open file for writing
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    string text = "Rain is in the forecast today.";
    file << text;
    file.close();

    file.open(path, ios::in | ios::out); // reopen with read/write
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file << "Snow"; // overwrites first 4 characters
    file.close();
    
    ifstream stream;
    string read;
    stream.open(path);
    while (getline(stream, read)) {
      cout << read << endl;
    }
    stream.close();
  }
    
  catch (exception& e) { //catch error
    cerr << e.what() << endl;
  }
  
  return 0;
}