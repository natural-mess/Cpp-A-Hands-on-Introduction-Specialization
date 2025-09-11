// Write a program that reads a tab ('\t') delimited CSV file and 
// prints the name of the oldest person in the file. 
// Assume that there are no two people with the same age.

// The CSV file looks like the one below.
// Peter   38  Doctor
// Paul    41  Lawyer
// Mary    32  Systems Engineer

// You should see the following output:
// The oldest person is Paul.

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

  try
  {
    ifstream file;
    string read;
    vector<string> data;
    file.open(path);
    if (!file)
    {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read))
    {
      stringstream ss(read);
      while (getline(ss, read, '\t'))
      {
        data.push_back(read);
      }
    }
    file.close();
    int max = stoi(data.at(1));
    int maxIndex = 1;
    for (int i=1; i<data.size(); i+=3)
    {
      if (stoi(data.at(i)) > max)
      {
        max = stoi(data.at(i));
        maxIndex = i;
      }
    }
    cout << "The oldest person is " << data.at(maxIndex-1) << "." << endl;
  }

  catch (exception& e)
  {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
