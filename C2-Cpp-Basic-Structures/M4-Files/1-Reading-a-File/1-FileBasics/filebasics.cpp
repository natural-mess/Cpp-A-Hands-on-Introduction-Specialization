#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  // string path = "student/text/practice1.txt";
  string path = "student/text/practice2.txt";

  // ifstream file;
  // file.open(path);
  // if (file.is_open()) {
  //   cout << "File successfully opened." << endl;
  // }
  // else if (!file.is_open()) {
  //   cout << "File failed to open." << endl;
  // }

  try { //try these actions
    ifstream file;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open."); //throw error
    }
    file.close();
    cerr << "File successfully opened and closed." << endl;
  }
    
  catch (exception& e) { //catch error
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
