#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string my_string = "Today is my birthday!";
  my_string.pop_back();

  cout << my_string << endl;

  my_string.erase(my_string.length()-1);

  cout << my_string << endl;    

  //add code above this line
  
  return 0;
  
}
