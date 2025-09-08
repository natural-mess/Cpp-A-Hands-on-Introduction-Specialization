#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line

  oceans.push_back("Pacific");
  oceans.push_back("Atlantic");
  oceans.push_back("Indian");
  oceans.push_back("Arctic");
  oceans.push_back("Southern");
  oceans.push_back("123");
  oceans.pop_back();
  oceans.at(0) = "Pacific";

  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}