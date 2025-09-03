// Using what you know about break statements, 
// fix the program so that it runs, prints correctly, and terminates successfully.
// #include <iostream>
// using namespace std;

// int main() {

//   for (int i = 100; i <= 100; i--) {
//     if (i == 0) {
//       cout << "Print me!" << endl;
//     }
//     else {
//       while (true) {
//         i++;
//         cout << "Don't print me!" << endl;
//       }
//     }
//   }

//   return 0;

// }


#include <iostream>
using namespace std;

int main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
      break;
    }
    else {
      while (true) {
        break;
        i++;
        cout << "Don't print me!" << endl;
      }
    }
  }

  return 0;

}
