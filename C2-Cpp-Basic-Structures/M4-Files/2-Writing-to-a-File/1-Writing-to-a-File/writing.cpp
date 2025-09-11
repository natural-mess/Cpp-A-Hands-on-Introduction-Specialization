#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/practice1.txt";

  try {
    ofstream file;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file << "Hello there";
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
  //add code above this line
  
  return 0;
  
}
