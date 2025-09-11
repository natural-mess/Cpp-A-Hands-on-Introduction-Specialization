#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/text/names2.txt";
  vector<string> names;
  string last_name = "Smith";
  int count = 0;

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read)) { //newline delimiter
      stringstream ss(read); //create a string stream of read
      while (getline(ss, read, ' ')) { //white space delimiter
        names.push_back(read);
      }
    }
    file.close();
    for (int i = 0; i < names.size(); i++) {
      if (i % 2 == 1) {
        if (names.at(i) == last_name) {
          count++;
        }
      }
    }
    cout << "There are " << count << " people whose last name is Smith." << endl;
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
