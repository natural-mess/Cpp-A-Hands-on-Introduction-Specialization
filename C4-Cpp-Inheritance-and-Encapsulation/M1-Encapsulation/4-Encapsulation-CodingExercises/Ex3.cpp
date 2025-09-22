// Complete the Song class which represents a song on a streaming service.
// Complete the Song class that includes all necessary getter and setter functions for each class attribute
// There should be a total of 6 getter functions
// There should be a total of 3 setter functions
// play_count, pay_rate and money_earned do not have setter functions because they are initialized to 0 or 0.001 when a Song object is instantiated
// Include a class function Play that takes in an int parameter and calls UpdatePlayCount and UpdateMoneyEarned that number of times
// Include a class function Stats that prints all of the class attributes according to their declaration order
// Include the appropriate access modifier(s) in your class
// DO NOT edit the specified code section in your source file or you might not receive credit for your work!

#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line
  public:
    // Constructor
    Song(string a, string t, string al) {
      artist = a;
      title = t;
      album = al;
    }

    // ----- Setters -----
    void SetArtist(const string& a) {
      artist = a;
    }

    void SetTitle(const string& t) {
      title = t;
    }

    void SetAlbum(const string& al) {
      album = al;
    }

    // ----- Getters -----
    string GetArtist() const {
      return artist;
    }

    string GetTitle() const {
      return title;
    }

    string GetAlbum() const {
      return album;
    }

    int GetPlayCount() const {
      return play_count;
    }

    double GetPayRate() const {
      return pay_rate;
    }

    double GetMoneyEarned() const {
      return money_earned;
    }

    // ----- Other member functions -----
    void Play(int n) {
      for (int i = 0; i < n; i++) {
        UpdatePlayCount();
        UpdateMoneyEarned();
      }
    }

    void Stats() const {
      cout << artist << endl;
      cout << title << endl;
      cout << album << endl;
      cout << play_count << endl;
      cout << pay_rate << endl;
      cout << money_earned << endl;
    }

  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE