// You are given two files, one called exercise1.cpp, 
// which is a main file, and one called header.h, 
// which is a header (or class) file. 
// Fill out the header.h file to get the expected output.

#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//add definitions below this line

class Hello{
  public:
    void PrintHello(){
      cout << "Hello" << endl;
    }
};

//add definitions above this line

#endif