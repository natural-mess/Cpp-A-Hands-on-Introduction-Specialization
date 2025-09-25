#include <iostream>
using namespace std;

//add class definitions below this line

class Alpha {
  public:
    void Show() {
      cout << "I am from class Alpha" << endl;
    }

    void Hello() {
      cout << "Hello from Alpha" << endl;
    }
};

class Bravo: public Alpha {
  public:
    void Show() {
      cout << "I am from class Bravo" << endl;
    }

    void Hello() {
      cout << "Hello from Bravo" << endl;
    }
};

//add class definitions above this line

int main() {

  //add code below this line

  int a = 5;
  int b = 10;
  cout << (a + b) << endl;
    
  string c = "5";
  string d = "10";
  cout << (c + d) << endl;
  
  bool e = true;
  bool f = false;
  cout << (e + f) << endl;

  // Alpha test_object;
  Bravo test_object;
  test_object.Show();
  test_object.Hello();
    
  //add code above this line

  return 0;

}