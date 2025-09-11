#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/practice2.txt";

  try {
    ofstream file;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    string text1 = "Hello, ";
    string text2 = "your balance is: ";
    string text3 = "12.34";
    // file << text1 + text2 + text3;
    // file << text1 + text2 << endl;
    // file << text1 + text2 << '\n';
    file << "Hello, your balance is:\n12.34";
    // file << text3;
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
