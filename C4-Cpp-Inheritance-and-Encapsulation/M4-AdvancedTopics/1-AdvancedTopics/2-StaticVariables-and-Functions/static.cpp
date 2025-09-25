#include <iostream>
using namespace std;

//add class definitions below this line

class Player {
  public:
    Player() {
      health = 100;
      score = 0;
    }
    void PrintLevel() {
      cout << level << endl;
    }
    static int ChangeLevel(int change) {
      level = change;
      return level;
    }
  
  private:
    int health;
    int score;
    static int level;
};

//add class definitions above this line  

int Player::level = 5; //initialize static variable level to 5

int main() {
  
  //add code below this line

  Player mario;
  mario.PrintLevel();
  cout << Player::ChangeLevel(6) << endl;
  Player luigi;
  luigi.PrintLevel();
  
  //add code above this line
  
  return 0;
  
}