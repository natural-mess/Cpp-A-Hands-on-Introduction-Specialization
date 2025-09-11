#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/practice3.txt";

  try {
    ofstream file;
    file.open(path, ios::app); //open file in append mode
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    // string text = "Adding to the file.";
    string text = "Rain is in the forecast today.";
    file << text;
    file.close();

    file.open(path, ios::in);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file << "Snow";
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
