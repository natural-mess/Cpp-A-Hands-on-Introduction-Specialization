// Create a Fruit class that contains two string attributes, name and color, as well as getter and setter functions.
// Requirements
// Create a Fruit class with string attributes, name and color
// Include getters called GetName and GetColor
// Include setters called SetName and SetColor
// Include BOTH the public as well as the private access modifiers in your class
// DO NOT edit the specified code in main or you might not receive credit for your work!
#include <iostream>
using namespace std;

//add class definitions below this line

class Fruit {
  public:
    Fruit(string n, string c)
    {
      name = n;
      color = c;
    }

    string GetName()
    {
      return name;
    }

    string GetColor()
    {
      return color;
    }

    void SetName(string n)
    {
      name = n;
    }

    void SetColor(string c)
    {
      color = c;
    }
  private:
    string name, color;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}