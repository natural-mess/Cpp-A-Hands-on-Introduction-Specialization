#include <iostream>
using namespace std;

//add class definitions below this line

class ExampleClass {
  public:
    void SetN(int n1, int n2) {
      num1 = n1;
      num2 = n2;
    }
  
    void Describe() {
      cout << "My numbers are: " << num1 << " and " << num2 << endl;
    }
  
    int Sum() {
      return num1 + num2;
    }
  
  private:
    int num1;
    int num2;
};

//add class definitions above this line


int main() {
  
  //add code below this line
  
  ExampleClass my_example;
  my_example.SetN(5, 7);
  my_example.Describe();
  cout << my_example.Sum() << endl;

  //add code above this line
  
  return 0;
  
}