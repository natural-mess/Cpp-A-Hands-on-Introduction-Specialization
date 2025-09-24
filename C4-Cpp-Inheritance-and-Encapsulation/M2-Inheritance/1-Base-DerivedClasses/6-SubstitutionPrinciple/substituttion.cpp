#include <iostream>
using namespace std;

//add class definitions below this line

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

//add class definitions above this line

//add function definitions below this line

void Substitution(Person p) {
  p.Greeting();
}

//add function definitions above this line

int main() {
  
  //add code below this line

  Superhero s;
  Substitution(s);

  //add code above this line
  
  return 0;
  
}