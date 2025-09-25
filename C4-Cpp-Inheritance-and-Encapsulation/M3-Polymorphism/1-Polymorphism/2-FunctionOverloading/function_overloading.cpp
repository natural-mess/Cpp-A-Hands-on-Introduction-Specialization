#include <iostream>
using namespace std;

//add class definitions below this line

class TestClass {
  public:
    int Sum(int n1, int n2, int n3, int n4, int n5) {
      return n1 + n2 + n3 + n4 + n5;
    }

    int Sum(int n1, int n2, int n3, int n4) {
      return n1 + n2 + n3 + n4;
    }

    int Sum(int n1, int n2, int n3) {
      return n1 + n2 + n3;
    }

    int Sum(int n1, int n2) {
      return n1 + n2;
    }
};

class Person { 
  public: 
    Person() {}

    Person(string na, int nu, string s) {
      name = na;
      number = nu;
      street = s;
    }

    string Info() {
      return (name + " lives at " + to_string(number) + ' ' + street + '.');
    }
  
  private:
    string name;
    int number;
    string street;
};

//add class definitions above this line

int main() {

  //add code below this line

  TestClass tc;
  cout << tc.Sum(1, 2, 3, 4, 5) << endl;
  cout << tc.Sum(1, 2, 3, 4) << endl;
  cout << tc.Sum(1, 2, 3) << endl;
  cout << tc.Sum(1, 2) << endl;

  Person p1;
  Person p2("Calvin", 37, "Main Street");
  cout << p1.Info() << endl;
  cout << p2.Info() << endl;

  //add code above this line

  return 0;

}