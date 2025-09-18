#include <iostream>
#include <vector>
using namespace std;

//add code below this line

/**
 * This function prints all values of an array
 * 
 * @param array A string array
 */
void PrintArray(string array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}

int main() {
  string names[] = {"Alan", "Bob", "Carol"};
  int len = sizeof(names) / sizeof(names[0]);
  PrintArray(names, len);
  return 0;
}

//add code above this line
