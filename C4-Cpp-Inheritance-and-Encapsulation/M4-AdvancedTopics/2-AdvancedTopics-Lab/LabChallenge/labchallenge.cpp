#include <iostream>
#include <iomanip>
using namespace std;

//add definitions below this line

struct BankAccount{
  double checking, savings;
  void ToString(){
    cout << setprecision(2) << fixed << "BankAccount[checking=" << checking << ", savings=" << savings << "]" << endl;
  }
};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  BankAccount account1;
  account1.checking = 2432;
  account1.savings = 89.52;
  BankAccount account2;
  account2.checking = 1998;
  account2.savings = 239.43;
  account1.ToString();
  account2.ToString();

  //DO NOT EDIT code above this line
  
  return 0;
  
}