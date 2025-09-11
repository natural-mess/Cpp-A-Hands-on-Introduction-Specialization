#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/labs/fileslab2.csv";
  vector<string> nums;

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
        nums.push_back(read);
      }
    }
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  for (int i = 0; i < nums.size(); i+=3) {
    int total = 0;
    for (int j = 0; j < 3; j++) {
      total += stoi(nums.at(i + j));
    }
    cout << "Total: " << total << endl;
  }
  
  //add code above this line
  
  return 0;
  
}
