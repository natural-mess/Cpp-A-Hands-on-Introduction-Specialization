#include <iostream>
using namespace std;

//add class definitions below this line

class Words {
  public:
    Words(string str, int n) {
      word = str;
      count = n;
    }

    void Printer() {
      cout << "The number of vowels in " << word;
      cout << " is " << CountVowels(word, count) << endl;
    }

  private:
    string word;
    int count;
  
    bool IsVowel(char ch) {
      ch = toupper(ch);
      return (ch=='A' || ch=='E' || ch=='I' ||
              ch=='O' || ch=='U');
    }
  
    int CountVowels(string str, int n) {
      if (n == 1) {
        return IsVowel(str[n-1]);
      }
      return CountVowels(str, n-1) + IsVowel(str[n-1]);
    }
};

//add class definitions above this line


int main() {
  
  //add code below this line
  
  string s = "house";
  Words vowels(s, s.length());
  vowels.Printer();


  //add code above this line
  
  return 0;
  
}