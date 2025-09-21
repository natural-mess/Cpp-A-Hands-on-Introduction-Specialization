#include <iostream>
using namespace std;

//add class definitions below this line

class Student {
  public:
    Student(string n, int g) {
      name = n;
      grade = g;
    }
    void StudentStatus(int s) {
      if (s < 65) {
        score = s;
        cout << name << " has not graduated and will remain in grade ";
        cout << grade << "." << endl;
      }
      else {
        score = s;
        cout << name << " has graduated and will be promoted to grade ";
        cout << grade + 1 << "." << endl;
      }
    }

  private:
    string name;
    int grade;
    int score;
};

//add class definitions above this line

int main() {
  
  //add code below this line

  Student alice("Alice", 4);
  alice.StudentStatus(60);
  alice.StudentStatus(90);

  //add code above this line
  
  return 0;
  
}
