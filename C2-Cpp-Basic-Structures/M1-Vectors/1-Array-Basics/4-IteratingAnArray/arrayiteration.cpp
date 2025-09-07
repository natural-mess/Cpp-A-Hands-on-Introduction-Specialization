#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", 
                      "Fred", "Grace", "Henry", "Ian", "Jen"};

  for (int i = 0; i < 10; i++) {
    cout << friends[i] << endl;
  }

  cout << sizeof(friends) << endl;

  cout << sizeof(friends) / sizeof(friends[0]) << endl;

  for (int i = 0; i < sizeof(friends) / sizeof(friends[0]); i++) {
    cout << friends[i] << endl;
  }
  //add code above this line
  
  return 0;
  
}