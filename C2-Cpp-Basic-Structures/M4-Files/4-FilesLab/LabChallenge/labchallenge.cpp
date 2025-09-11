#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

void FindAndReplace(string& lines, string burma, string myanmar) {
  // Get the first string occurrence
  size_t pos = lines.find(burma);
  // Repeat till end of string
  while( pos != string::npos) {
    // Replace this occurrence of Sub String
    lines.replace(pos, burma.size(), myanmar);
    // Get the next occurrence from the current position
    pos = lines.find(burma, pos + myanmar.size());
  }
}

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
  
  vector<string> data;
  string burma = "Burma";
  string myanmar = "Myanmar";
  try
  {
    ifstream file;
    string read;
    file.open(path);
    if (!file)
    {
      throw runtime_error("File failed to open");
    }
    while(getline(file, read))
    {
      stringstream ss(read);
      while(getline(ss, read))
      {
        data.push_back(read);
      }
    }
    file.close();
    for (int i = 0; i < data.size(); i++)
    {
      FindAndReplace(data.at(i), burma, myanmar);
      cout << data.at(i) << endl;
    }
  }

  catch (exception& e)
  {
    cerr << e.what() << endl;
  }
  
  //add code above this line
  
  return 0;
  
}
