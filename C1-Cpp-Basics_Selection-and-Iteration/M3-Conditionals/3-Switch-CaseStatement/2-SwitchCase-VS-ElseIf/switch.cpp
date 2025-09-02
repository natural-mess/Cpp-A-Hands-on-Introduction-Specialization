#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  int month = 2;
  int year = 2000;
  int numDays = 0;

  switch (month) {
    case 1: case 3: case 5:
    case 7: case 8: case 10:
    case 12:
      numDays = 31;
      break;
    case 4: case 6:
    case 9: case 11:
      numDays = 30;
      break;
    case 2:
      if (((year % 4 == 0) &&
        ! (year % 100 == 0)) ||
          (year % 400 == 0))
          numDays = 29;
      else
        numDays = 28;
        break;
    default:
      cout << "Invalid month.";
      break;
  }
  cout << "Number of Days = " << numDays << endl;

  //add code above this line
  
  return 0;
  
}
