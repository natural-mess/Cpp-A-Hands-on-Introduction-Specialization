#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/labs/fileslab1.txt";
  vector<string> text;

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read, '.')) {
      text.push_back(read + '.');
    }
    cout << text.at(1).erase(0, 1) << endl; //erase the first string char
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
