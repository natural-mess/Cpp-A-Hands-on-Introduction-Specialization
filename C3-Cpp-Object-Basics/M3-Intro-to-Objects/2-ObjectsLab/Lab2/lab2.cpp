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
    
  Student(string n, int id, string m, double g, int a, int y) {
    name = n;
    ID = id;
    major = m;
    GPA = g;
    age = a;
    YOG = y;
  }
};

//add class definitions above this line

int main() {
  
  //add code below this line

  Student andy("Andy", 123456, "Computer Science", 3.45, 22, 2021);
  Student mary("Mary", 456789, "Mathematics", 3.78, 21, 2022);
  
  cout << mary.name << " is a student in the " << mary.major << " department." << endl;
  cout << mary.name << " is a junior while " << andy.name << " is a senior." << endl;

  //add code above this line
  
  return 0;
  
}