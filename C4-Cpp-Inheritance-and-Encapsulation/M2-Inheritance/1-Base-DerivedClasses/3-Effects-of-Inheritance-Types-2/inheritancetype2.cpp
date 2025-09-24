#include <iostream>
using namespace std;

class Base {
  public:
    void Public(string s) {
      s = "public";
      cout << s << endl;
    }
  
  protected:
    void Protected(string s) {
      s = "protected";
      cout << s << endl;
    }
    
  private:
    void Private(string s) {
      s = "private";
      cout << s << endl;
    }
};

//add class definitions below this line

class Derived : protected Base {
  public:
    void ReturnPublic(string s) {
      Public(s_derived);
    }
  
    void ReturnProtected(string s) {
      Protected(s_derived);
    }
  
  private:
    string s_derived;
};

//add class definitions above this line

int main() {
  
  //add code below this line
  
  string s_main;
  Derived dc;
  dc.ReturnProtected(s_main);
  // dc.Public(s_main);

  //add code above this line
  
  return 0;
  
}