// Create the Watch class following the conventions of encapsulation.
// Create a Watch class with the following attributes:
// manufacturer - string that represents who makes the watch
// model - string that represents the specific watch
// diameter - integer that represents (in millimeters) the diameter of the watch
// water_resistance - integer that represents (in meters) the water resistance of the watch
// material - string that represents what the watch is made of
// Include all necessary getter and setter functions for each attribute (10 total)
// Create a class function called Summary that prints all of the attributes of the class (see expected output below)
// Include BOTH the public as well as the private access modifiers in your class
// DO NOT edit the specified code in main or you might not receive credit for your work!
#include <iostream>
using namespace std;

//add class definitions below this line

class Watch {
  public:
    Watch(const string& m1, const string& m2, int d, int w, const string& m3)
    {
      manufacturer = m1;
      model = m2;
      diameter = d;
      water_resistance = w;
      material = m3;
    }
    // ----- Setters -----
    void SetManufacturer(const string& m) {
        manufacturer = m;
    }

    void SetModel(const string& m) {
        model = m;
    }

    void SetDiameter(int d) {
        diameter = d;
    }

    void SetWaterResistance(int w) {
        water_resistance = w;
    }

    void SetMaterial(const string& m) {
        material = m;
    }

    // ----- Getters -----
    string GetManufacturer() const {
        return manufacturer;
    }

    string GetModel() const {
        return model;
    }

    int GetDiameter() const {
        return diameter;
    }

    int GetWaterResistance() const {
        return water_resistance;
    }

    string GetMaterial() const {
        return material;
    }

    void Summary()
    {
      cout << "Manufacturer: " << manufacturer << endl;
      cout << "Model: " << model << endl;
      cout << "Diameter: " << diameter << " mm"<< endl;
      cout << "Water Resistance: " << water_resistance << " m" << endl;
      cout << "Material: " << material << endl;
    }

  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}