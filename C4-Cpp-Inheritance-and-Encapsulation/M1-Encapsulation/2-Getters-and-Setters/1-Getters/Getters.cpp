#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Phone {
  public:
    Phone(string mo, int s, int me) {
      model = mo;
      storage = s;
      megapixels = me;
    }

    string GetModel() {
      return model;
    }
  
  private:
    string model;
    int storage;
    int megapixels;
};

//add class definitions above this line


int main() {
  
  //add code below this line

  Phone my_phone("iPhone", 256, 12);
  cout << my_phone.GetModel() << endl;

  //add code above this line
  
  return 0;
  
}