#include <iostream>
using namespace std;
//add class definitions below this line
class Player {
    public:
        int health;
        int score;
        int level;
    Player() {
        health = 100;
        score = 0;
        level = 1;
    }
};
//add class definitions above this line
//add function definitions below this line
void PrintPlayer(Player p) {
    if (p.health <= 0) {
        cout << "This player is dead. They died on level " << p.level;
        cout << " with a score of " << p.score << "." << endl;
    }
    else {
        cout << "This player has " << p.health << " health, a score of " << p.score;
        cout << ", and is on level " << p.level << "." << endl;
    }
}

void ChangeHealth(Player p, int amount) {
    p.health += amount;
    cout << "New health = " << p.health << endl;
}
//add function definitions above this line
int main() {
    //add code below this line
    Player player1;
    PrintPlayer(player1);
    player1.health = 0;
    player1.score += 25;
    player1.level += 1;
    PrintPlayer(player1);
    ChangeHealth(player1, 20); //changes health of player1
    PrintPlayer(player1); //does not register changes from
    ChangeHealth function
    //add code above this line
    return 0;
}