#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }

    // Returns the current number of passengers without any parameters.
    int GetPassengers()
    {
      return passengers;
    }

    void Board (int p)
    {
      if (p >= 0)
      {
        passengers += p;
        CalculateFares();
      }
    }

    void Disembark(int p)
    {
      if (p >= 0)
      {
        passengers -= p;
        if (passengers <= 0)
        {
          passengers = 0;
        }
      }
    }

    double GetFares()
    {
      return total_fares;
    }
    
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;

    // Calculates fares for all existing passengers on the subway and adds it to total_fares. 
    // This is a helper function inside the Board function.
    // NOTE: In C++, it is a best practice to make helper class functions private; 
    void CalculateFares ()
    {
      total_fares += (double)passengers * fare;
    }
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}