#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  //add code below this line
  

  string path = "student/text/readpractice.txt";  

  try {
    ifstream file;
    file.open(path); //content of file goes into memory buffer
    if (!file) {
      throw runtime_error("File failed to open.");
    }
    cout << file.rdbuf(); //read the buffered content
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
