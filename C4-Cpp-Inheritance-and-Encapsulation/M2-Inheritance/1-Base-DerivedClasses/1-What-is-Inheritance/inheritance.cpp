#include <iostream>
using namespace std;

class Person {
  public:
    string GetName() {
      return name;
    }
  
    void SetName(string new_name) {
      name = new_name;
    }
  
    int GetAge() {
      return age;
    }
  
    void SetAge(int new_age) {
      age = new_age;
    }
  
    string GetOccupation() {
      return occupation;
    }
  
    void SetOccupation(string new_occupation) {
      occupation = new_occupation;
    }
  
    void SayHello() {
      cout << "Hello, my name is " << name << '.' << endl;
    }
  
    void SayAge() {
      cout << "I am " << age << " years old." << endl;
    }
  
  private:
    string name;
    int age;
    string occupation;
};

//add class definitions below this line

class Superhero : public Person {
  
};

//add class definitions above this line

int main() {
  
  //add code below this line

  Superhero s;
  s.SetName("Peter Parker");
  s.SetOccupation("Student");
  cout << s.GetOccupation() << endl;
  s.SayHello();

  //add code above this line
  
  return 0;
  
}