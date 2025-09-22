#include <iostream>
using namespace std;

//add class definitions below this line
    
class Phone {
  public:
    Phone(string mo, int st, int me) {
      model = mo;
      storage = st;
      megapixels = me;
    }
  
    void Describe() {
      cout << "My " << storage << " gig " << model;
      cout << " has a " << megapixels << " megapixels camera." << endl;
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
  // cout << my_phone.model << endl;
  // my_phone.storage = 64;
  // cout << my_phone.storage << endl;
  // cout << my_phone.megapixels + 10 << endl;

  my_phone.Describe();

  //add code above this line
  
  return 0;
  
}