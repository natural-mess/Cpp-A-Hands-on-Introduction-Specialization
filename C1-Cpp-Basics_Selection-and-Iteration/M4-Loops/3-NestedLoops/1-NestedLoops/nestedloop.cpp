#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  // for (int row = 0; row < 10; row++) { //outer loop
  //   for (int col = 0; col < 10; col++) { //inner loop
  //     cout << "#";
  //   }
  //   cout << "" << endl; //adds new line
  // }

  // Challenge 1
  // for (int row = 0; row < 7; row++) { //outer loop
  //   for (int col = 0; col < 11; col++) { //inner loop
  //     cout << "#";
  //   }
  //   cout << "" << endl; //adds new line
  // }

  // Challenge 2
  // for (int row = 0; row < 5; row++)
  // {
  //   if (row % 2 == 0)
  //   {
  //     for (int col = 0; col < 10; col++)
  //     {
  //       cout << ">";
  //     }
  //     cout << endl;
  //   }
  //   else
  //   {
  //     for (int col = 0; col < 10; col++)
  //     {
  //       cout << "<";
  //     }
  //     cout << endl;
  //   }
  // }

  // Challenge 3
  for (int row=1; row<=5; row++)
  {
    for (int col=1; col<=row; col++)
    {
      cout << row;
    }
    cout << endl;
  }

  //add code above this line
  
  return 0;
  
}
