// Create the Atm class which represents a money deposit and withdrawal system.
// The Atm class only has one attribute, money
// money is a double that represents the amount of money in the account which is 0 when instantiated
// The Atm constructor takes NO parameter
// Include the appropriate getter function that returns the amount of money
// There is NO setter function because a deposit and withdraw system typically starts with a 0 value initially
// Create two class functions, Deposit and Withdraw
// Deposit takes in a double parameter and checks to see if it’s greater than 0 and adds that double to money
// If the parameter is less than or equal to 0, the system will print You cannot deposit a negative or 0 amount of money.
// Withdraw also takes in a double parameter and checks to see if it’s greater than 0 and subtracts that value from money
// If the parameter is less than or equal to 0, the system will print You cannot withdraw a negative or 0 amount of money.
// If money is less than the specified parameter, the system will print You do not have enough funds to withdraw that amount.
// Include BOTH the public as well as the private access modifiers in your class

#include <iostream>
#include <iomanip>
using namespace std;

//add class definitions below this line

class Atm{
  public:
    Atm(){

    }

    double GetMoney()
    {
      return money;
    }

    void Deposit(double m)
    {
      if (m >= 0)
      {
        money += m;
      }
      else
      {
        cout << "You cannot deposit a negative or 0 amount of money." << endl;
      }
    }

    void Withdraw(double m)
    {
      if (m >= 0)
      {
        if (money < m)
        {
          cout << "You do not have enough funds to withdraw that amount." << endl;
        }
        else
        {
          money -= m;
        }
      }
      else
      {
        cout << "You cannot withdraw a negative or 0 amount of money." << endl;
      }
    }

  private:
    double money = 0;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed; //prevents value from being truncated or rounded
  cout << setprecision(2); //sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}