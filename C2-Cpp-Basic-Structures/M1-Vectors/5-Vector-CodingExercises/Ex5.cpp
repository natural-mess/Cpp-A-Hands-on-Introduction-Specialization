// You are working to create a program that continuously takes in double and 
// integer inputs and adds them to a vector called numList. 
// If an input is not a double or an integer type, then the program will iterate through numList, 
// add each value to the total, and calculate the average (avg). 
// Finally, the average is printed with a newline.

// Follow the comments within the code to complete the program. 
// When running your code, you should be able to continuously enter doubles and integers into the Terminal. 
// If you enter a non-double or non-integer, the program should stop and print the average. 
// If no doubles or integers are entered, then the program will print 0.

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
  
    // add input into vector
    numList.push_back(input);
    
    
    // your code goes above
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  // iterate through vector, add elements to total, then calculate average
  if (numList.size() == 0)
  {
    numList.push_back(0);
  }
  for (double i: numList)
  {
    total = total + i;
  }
  avg = total / numList.size();
  
  // your code goes above
  
  cout << avg << endl;
  
  return 0;
  
}