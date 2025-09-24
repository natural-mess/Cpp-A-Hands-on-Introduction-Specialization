#include <iostream>
using namespace std;

class Person {
  public:
    void Greeting() {
      cout << "I'm a Person" << endl;
    }
};

class Superhero : public Person {
  public:
    void Greeting() {
      cout << "I'm a Superhero" << endl;
    }
};

class Animal {
  public:
    void Greeting() {
      cout << "I'm an Animal" << endl;
    }
};

int main() {
  
  //add code below this line

  // cout << boolalpha;
  // cout << "Superhero is derived from Person: " << is_base_of<Person, Superhero>::value << endl;
  // cout << "Animal is derived from Superhero: " << is_base_of<Superhero, Animal>::value << endl;
  // cout << "Person is derived from Animal: " << is_base_of<Animal, Person>::value << endl;
  // cout << "Person is derived from Superhero: ";
  // cout << is_base_of<Superhero, Person>::value << endl;
  Superhero s;
  cout << "s is of type: " << typeid(s).name() << endl;
  cout << boolalpha;
  cout << "Superhero is derived from Person: ";
  cout << is_base_of<Person, Superhero>::value << endl;

  //add code above this line
  
  return 0;
  
}