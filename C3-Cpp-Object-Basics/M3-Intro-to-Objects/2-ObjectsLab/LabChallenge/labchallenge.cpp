#include <iostream>
using namespace std;

//add class definitions below this line
    
class Dog {
  public:
    string name;
    string breed;

  Dog (string n, string b) {
    name = n;
    breed = b;
  }
};
  
//add class definitions above this line

int main() {

Dog dog1("Marceline", "German Shepherd");
Dog dog2 = dog1;
dog2.name = "Cajun";
dog2.breed = "Belgian Malinois";
    
cout << dog1.name << " " << dog1.breed << endl;
cout << dog2.name << " " << dog2.breed << endl;
if (dog1.name == dog2.name && dog1.breed == dog2.breed) {
  cout << boolalpha << true;
}
else {
  cout << boolalpha << false;
}
  
  return 0;
  
}
