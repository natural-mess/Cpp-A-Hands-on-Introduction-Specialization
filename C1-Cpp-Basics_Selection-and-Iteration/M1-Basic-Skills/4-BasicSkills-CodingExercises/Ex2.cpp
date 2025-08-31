// Declares an int variable called my_int.
// Initializes it to the value of first_num.
// Prints the value of my_int.
// Re-assigns it to the value of second_num.
// Prints the value of my_int.
// Re-assigns it to the value of third_num
// Prints the value of my_int.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int first_num = atoi((argv[1]));
  int second_num = atoi((argv[2]));
  int third_num = atoi((argv[3]));
  
  //add code below this line
  int my_int = first_num;
  cout << my_int;
  my_int = second_num;
  cout << my_int;
  my_int = third_num;
  cout << my_int;


  //add code above this line
  
  return 0;
  
}
