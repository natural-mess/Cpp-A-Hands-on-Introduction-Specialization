#include <iostream>
using namespace std;

//add class definitions below this line
    
class Student {
  public:
    string name;
    int ID;
    string major;
    double GPA;
    int age;
    int YOG;
};
  
//add class definitions above this line

int main() {
  
  //add code below this line

  Student andy;
  andy.name = "Andy";
  andy.ID = 123456;
  andy.major = "Computer Science";
  andy.GPA = 3.45;
  andy.age = 22;
  andy.YOG = 2021;

  cout << andy.name << " is " << andy.age;
  cout << " years old and is graduating with a degree in ";
  cout << andy.major << " in " << andy.YOG << ".";

  //add code above this line
  
  return 0;
  
}
