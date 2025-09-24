// Use the CelestialBody class to the left as the base class. 
// Create the Satellite and Planet classes, both of which are derived classes of CelestialBody. 
// The Satellite class has the attribute string host_planet while the Planet class has the attribute string host_star.
// Expected Output
// Satellite name = Moon, size = 2651, mass = 3716, atmospheric composition = helium, host planet = Earth
// Planet name = Earth, size = 5349, mass = 8910, atmospheric composition = nitrogen, host star = Sun
// Satellite name = Titan, size = 3199, mass = 13452, atmospheric composition = nitrogen, host planet = Saturn
// Planet name = Saturn, size = 82713, mass = 56834, atmospheric composition = hydrogen, host star = Sun

#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class CelestialBody {
  public:
    CelestialBody(double s, double m, string c, string n) {
      size = s;
      mass = m;
      atm_composition = c;
      name = n;
    }

    double GetSize() {
      return size;
    }

    double GetMass() {
      return mass;
    }

    string GetComposition() {
      return atm_composition;
    }

    string GetName() {
      return name;
    }
  
  private:
    double size;
    double mass;
    string atm_composition;
    string name;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT//////////////////////////////
class Satellite : public CelestialBody { //
///////////////////////////////////////////
  public:
    Satellite(double s, double m, string c, string n, string h):CelestialBody(s, m, c, n){
      hot_planet = h;
    }

    string GetHostPlanet()
    {
      return hot_planet;
    }

  private: 
    string hot_planet;
};
//DO NOT EDIT///////////////////////////
class Planet : public CelestialBody { //
////////////////////////////////////////
  public:
    Planet(double s, double m, string c, string n, string h):CelestialBody(s, m, c, n){
      hot_star = h;
    }

    string GetHostStar()
    {
      return hot_star;
    }
  
  private:
    string hot_star;
};
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Satellite s(2651, 3716, "helium", "Moon", "Earth");
  Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
  Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
  Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
  cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
  cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
  cout << ", host planet = " << s.GetHostPlanet() << endl;
  cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
  cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
  cout << ", host star = " << p.GetHostStar() << endl;
  cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
  cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
  cout << ", host planet = " << s2.GetHostPlanet() << endl;
  cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
  cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
  cout << ", host star = " << p2.GetHostStar() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}