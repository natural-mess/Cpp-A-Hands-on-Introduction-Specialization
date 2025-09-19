// The BigCat class helps to record information on the animals in the Panthera genus (tiger, lion, jaguar, leopard, and snow leopard). 
// Since all animals are in the same genus, the object will have the default class attribute genus with the string value panthera. 
// The constructor accepts the following parameters (in this order):
// species- string with the species of the animal, e.g. "tigris"
// commonName - string with the common name of the animal, e.g. "tiger"
// habitat - vector of strings with common locations of the animal, e.g. {"tropical rainforests", "grasslands", "temperate forests"}
// Your task is to construct a BigCat object called snow_leopard so that when the program runs and prints the information on snow_leopard, 
// you will get the following result:
// A snow leopard is part of the uncia species.
// Their genus class is panthera.
// Some of their habitats include: Himalaya mountains, Siberian mountains, etc.

#include <iostream>
#include <vector>
using namespace std;
    
class BigCat {
  public:
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";
  
  BigCat(string sp, string cn, vector<string> h) {
    species = sp;
    common_name = cn;
    habitat = h;
  }
};

int main() {
  
  //add code below this line

  BigCat snow_leopard ("uncia", "snow leopard", {"Himalaya mountains", "Siberian mountains"});

  //add code above this line
  
  cout << "A " << snow_leopard.common_name; 
  cout << " is part of the " << snow_leopard.species << " species." << endl;
  cout << "Their genus class is " << snow_leopard.genus << "." << endl;
  cout << "Some of their habitats include: ";
  for (auto a : snow_leopard.habitat) {
    cout << a << ", ";
  }
  cout << "etc." << endl;
  
  return 0;
  
}
