// Write a program that reads a comma delimited CSV file and 
// prints all of the cities which reside in the Southern Hemisphere.
// Note, any latitude with a negative value is south of the equator.
// The CSV file looks like the one below.
// City,Country,Latitude,Longitude
// Beijing,China,39,116
// Perth,Australia,-57,115
// Port Moresby,Papua New Guinea,-25,147
// Tokyo,Japan,35,139

// You should see the following output:
// The following cities are in the Southern Hemisphere: Perth, Port Moresby.

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
    file.ignore(100, '\n'); // ignore the first 100 characters or until the first newline, this case it will ignore the first line
    while (getline(file, read))
    {
      stringstream ss(read);
      while (getline(ss, read, ','))
      {
        data.push_back(read);
      }
    }
    file.close();
    string results;
    cout << "The following cities are in the Southern Hemisphere: ";
    for (int i=2; i<data.size(); i+=4)
    {
      if (stoi(data.at(i)) < 0)
      {
        results += (data.at(i - 2) + ", ");
      }
    }
    results.pop_back(); // remove space
    results.pop_back(); // remove comma
    results+= ".";
    cout << results;
  }

  catch (exception& e)
  {
    cerr << e.what() << endl;
  }

  //add code above this line
  
  return 0;
  
}

