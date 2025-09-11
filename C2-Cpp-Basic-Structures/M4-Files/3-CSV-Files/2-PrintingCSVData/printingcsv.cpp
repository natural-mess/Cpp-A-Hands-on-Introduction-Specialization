#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/csv/homeruns.csv";
  vector<string> data;

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read)) {
      stringstream ss(read);
      while (getline(ss, read, ',')) {
        data.push_back(read);
      }
    }
    file.close();
    for (int i = 0; i < data.size(); i++) {
      if (i % 3 == 0) {
        cout << setw(20) << left << data.at(i);
      }
      else if (i % 3 == 1) {
        cout << setw(15) << left << data.at(i);
      }
      else {
        cout << data.at(i) << endl;
      }
    }
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
