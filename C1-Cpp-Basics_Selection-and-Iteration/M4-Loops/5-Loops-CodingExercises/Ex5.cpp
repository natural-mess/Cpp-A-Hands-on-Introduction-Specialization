// For this assignment, you will use a nested loop to produce the unique output below.
// ....1
// ...2
// ..3
// .4
// 5

// You must include two and only two loops in your code, one nested inside of another.
// You must include two and only two cout statements, one for each of your loop.

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  int k = 5;
  for (int i=1; i<=5; i++)
  {
    for (int j=k-i; j>0; j--)
    {
      cout << ".";
    }
    cout << i << endl;
  }

  //add code above this line
  
  return 0;
  
}
