#include <iostream>
using namespace std;

class Person {
  public:
    Person(string n1, int a1) {
      name = n1;
      age = a1;
    }
  
    void ReturnPerson() {
      cout << name << endl;
      cout << age << endl;
    }
  
  private:
    string name;
    int age;
};

//add class definitions below this line

class Superhero : public Person {
  public:
    Superhero(string n2, int a2) : Person(n2, a2) {}
};

//add class definitions above this line

int main() {
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}