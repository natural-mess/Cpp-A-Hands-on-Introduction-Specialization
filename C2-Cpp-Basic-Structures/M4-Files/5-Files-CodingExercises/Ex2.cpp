// Write a program that reads a comma delimited CSV file with four 
// columns and returns the average of each column in the file. 
// Assume that the CSV files used will only contain 3 rows and 4 columns.
// The CSV file looks like the one below.
// 1,5,10,30
// 19,15,10,15
// 10,4,-2,15

// You should see the following output:
// 10 8 6 20
// Where 10 represents the average of the numbers in the first column, 
// 8 represents the average of the numbers in the second column, etc.

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
    int avg = 0;
    file.open(path);
    if (!file)
    {
      throw runtime_error("File failed to open.");
    }
    while (getline(file, read))
    {
      stringstream ss(read);
      while (getline(ss, read, ','))
      {
        data.push_back(read);
      }
    }
    file.close();
    
    for (int i=0; i<4; i++)
    {
      for (int j=0; j<data.size(); j+=4)
      {
        avg += stoi(data.at(i+j));
      }
      cout << avg/3 << " ";
      avg=0;
    }
    cout << endl;
  }

  catch (exception& e)
  {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}
