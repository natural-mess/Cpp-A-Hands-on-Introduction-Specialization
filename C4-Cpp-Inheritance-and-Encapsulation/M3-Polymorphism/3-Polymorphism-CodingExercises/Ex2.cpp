// Vehicle is an abstract class. 
// Create the Airplane class as a derived class of Vehicle. 
// Extend and override Airplane so that it has a constructor, a Distance function, and one attribute (double speed). 
// The Distance function should return the distance traveled by the Airplane object. 
// Distance is calculated by multiplying speed by time.

#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////
class Vehicle {                             //
  public:                                   //
    virtual void Distance(double time) = 0; //
};                                          //
//////////////////////////////////////////////

//add class definitions below this line

class Airplane : public Vehicle {
  public:
    Airplane (double s){
      speed = s;
    }

    void Distance (double time){
      cout << speed*time << endl;
    }

  private:
    double speed;
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);

  //DO NOT EDIT code above this line
  
  return 0;
  
}