#include <iostream>
using namespace std;

//add class definitions below this line

class Player {
  public:
    Player() {
      health = 100;
      score = 0;
      level = 1;
    }
    void PrintPlayer() {
      if (health <= 0) {
        cout << "This player is dead. They died on level " << level;
        cout << " with a score of " << score << "." << endl;
      }
      else {
        cout << "This player has " << health << " health, a score of " << score;
        cout << ", and is on level " << level << "." << endl;
      }
    }
    void ChangeHealth(int amount) {
      health += amount;
      cout << "New health = " << health << endl;
    }
  
  private:
    int health;
    int score;
    int level;
};

//add class definitions above this line

int main() {
  
  //add code below this line

  Player player1;
  player1.PrintPlayer();
  player1.ChangeHealth(20);
  player1.PrintPlayer();

  //add code above this line
  
  return 0;
  
}