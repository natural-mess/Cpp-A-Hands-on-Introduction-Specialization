// Write a program that reads a text file and returns 
// the number of lines as well as the total number of characters in the file.

// output
// 4 line(s)
// 228 character(s)

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line

  int numLine=0, numChar=0;
  try
  {
    ifstream file;
    string read;
    file.open(path);
    if (!file)
    {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read))
    {
      numLine++;
      numChar += read.length();
    }
    file.close();
    cout << numLine << " line(s)" << endl << numChar << " character(s)" << endl;
  }

  catch (exception& e)
  {
    cerr << e.what() << endl;
  }
  
  //add code above this line
  
  return 0;
  
}