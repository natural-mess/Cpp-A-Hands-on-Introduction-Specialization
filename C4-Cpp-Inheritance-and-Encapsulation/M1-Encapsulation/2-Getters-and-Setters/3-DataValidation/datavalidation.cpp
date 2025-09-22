#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Person {
  public :
    Person(string n, int a) {
      name = n;
      age = a;
    }

    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      if (new_name != "") {
        name = new_name;
      }
    }

    int GetAge() {
      return age;
    }

    void SetAge(int new_age) {
      if (new_age >= 0 && new_age <= 200) {
        age = new_age;
      }
    }
  
  private: 
    string name;
    int age;
};
  
//add class definitions above this line


int main() {
  
  //add code below this line

  Person my_person("Calvin", 6);
  cout << my_person.GetName() << " is " << my_person.GetAge() << " years old." << endl;
  my_person.SetAge(-100);
  cout << my_person.GetName() << " is " << my_person.GetAge() << " years old." << endl;

  //add code above this line
  
  return 0;
  
}