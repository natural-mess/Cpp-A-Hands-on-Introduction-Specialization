// Create the class Child such that the following criteria are met:
// Child is a derived class of Parent2 which is a derived class of Parent1
// Override Identify in Child so that it returns This function is called from Child
// Create the function Identify2 that invokes the Identify function from Parent2 by using the scope resolution operator (Parent2::Identify())
// Create the function Identify3 that invokes the Identify function from Parent1 by using the scope resolution operator (Parent1::Identify())

#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent1";
    }
};

class Parent2 : public Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent2";
    }
};

//DO NOT EDIT code above this line

//add class definitions below this line

class Child : public Parent2 {
  public:
    string Identify() {
      return "This function is called from Child";
    }

    string Identify2() {
      return Parent2::Identify();
    }

    string Identify3() {
      return Parent1::Identify();
    }
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Child c;
  cout << c.Identify() << endl;
  cout << c.Identify2() << endl;
  cout << c.Identify3() << endl;
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}