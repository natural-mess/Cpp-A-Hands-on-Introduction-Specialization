// Write a program that reads a text file and 
// prints the contents in reverse order.

// Output

// The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
// ‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
// ‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
// ‘Boy, you will never see your father again; you must come with me.’
// He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’

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
      data.push_back(read);
    }
    file.close();
    
    for (int i=data.size()-1; i>=0; i--)
    {
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
