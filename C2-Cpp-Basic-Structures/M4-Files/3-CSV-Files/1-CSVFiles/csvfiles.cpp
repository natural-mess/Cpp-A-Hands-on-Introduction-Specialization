#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line

  string path = "student/csv/monty_python_movies.csv";

  try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    file.ignore(19); //Ignore the first 19 characters from index 0-18
    // file.ignore(500, '\n');
    while (getline(file, read, ',')) {
      cout << read << endl;
    }
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
