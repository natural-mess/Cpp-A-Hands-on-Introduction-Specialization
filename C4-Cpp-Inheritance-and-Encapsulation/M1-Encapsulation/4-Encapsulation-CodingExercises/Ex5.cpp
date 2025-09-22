// Create the class CardBinder which stores integer values of gold_card and silver_card. 
// Assume that a CardBinder object can only hold at maximum 20 total cards of gold_card and silver_card combined.
// Create a CardBinder class with integer attributes, gold_card and silver_card
// The CardBinder constructor takes NO parameters
// gold_card and silver_card are 0 when instantiated
// Create two getter functions to return each of the class attribute
// Create a GetTotal function that returns the sum of gold_card and silver_card
// There is NO setter function for this class
// Create an AddGold class function that takes an integer as a parameter
// The class checks to make sure that the parameter is not negative or 0
// If the parameter is negative or 0, You cannot add a negative or 0 amount of cards. is printed
// Otherwise, check to make sure that the sum of the parameter amount, gold_card, and silver_card is not over 20
// If storage exceeds 20, You do not have enough binder room. is printed
// Else, add the parameter amount to gold_card
// Create a RemoveGold class function that takes an integer as a parameter
// The class checks to make sure that the parameter is not negative or 0
// If the parameter is negative or 0, You cannot remove a negative or 0 amount of cards. is printed
// Otherwise, check to make sure that gold_card minus the parameter amount is not less than 0
// If gold_card minus the parameter amount falls below 0, You do not have enough gold cards to remove. is printed
// Else, subtract the parameter amount from gold_card
// Repeat the same process for the AddSilver and RemoveSilver class functions
// Include BOTH the public as well as the private access modifiers in your class
#include <iostream>
using namespace std;

//add class definitions below this line

class CardBinder{
  public:
    CardBinder(){}

    int GetGold()
    {
      return gold_card;
    }

    int GetSilver()
    {
      return silver_card;
    }

    int GetTotal()
    {
      return gold_card+silver_card;
    }

    void AddGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      } 
      else if (GetTotal() + amount > 20) {
        cout << "You do not have enough binder room." << endl;
      } 
      else {
        gold_card += amount;
      }
    }

    void RemoveGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      } 
      else if (gold_card - amount < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      } 
      else {
        gold_card -= amount;
      }
    }

    void AddSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      } 
      else if (GetTotal() + amount > 20) {
        cout << "You do not have enough binder room." << endl;
      } 
      else {
        silver_card += amount;
      }
    }

    void RemoveSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      } 
      else if (silver_card - amount < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      } 
      else {
        silver_card -= amount;
      }
    }

  private:
    int gold_card = 0;
    int silver_card = 0;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}