# Lab Challenge: 2D Chessboard
## 2D Chessboard
You are trying to create a chessboard representation using the alphabetical uppercase letters `O` and `X`. The `O` represents the lighter spaces while the `X` represents the darker spaces.

```
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
```

So far you have the following code within the text editor to your left:

```cpp
#include <iostream>
using namespace std;

int main() {
  
  string chessboard[8][8];
  
  int row = sizeof(chessboard) / sizeof(chessboard[0]);
  int col = sizeof(chessboard[0]) / sizeof(string);
  
  //add code below this line



  //add code above this line
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == col - 1) {
        cout << chessboard[i][j] << endl;
      }
      else {
        cout << chessboard[i][j];
      }
    }
  }
  
  return 0;
  
}
```

## Chessboard Challenge
For this challenge, you will use your knowledge of 2D arrays to produce the chessboard pattern:

```
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
```

Requirement:
Your program cannot make any changes to the existing code in the program. If you do, you will not earn any credit for this challenge. If you accidentally delete any existing code, you can copy the original code shown above back into your program.

Hint: It is probably much easier to use nested `for` loops in your code to populate the 2D array with either `O` or `X` than to go through each (row, column) index to modify the elements.

If you used a nested for loop in your code, you would need to identify the pattern that exists within the chessboard. One noticeable pattern is shown below:
```
OX
XO
```
- Even row index and even column index = O
- Odd row index and odd column index = O
- Even row index and odd column index = X
- Odd row index and even column index = X

```cpp
for (int x = 0; x < row; x++) {
  for (int y = 0; y < col; y++) {
    if ((x % 2 == 0) && (y % 2 == 0)) {
      chessboard[x][y] = "O";
    }
    else if ((x % 2 == 1) && (y % 2 == 1)) {
      chessboard[x][y] = "O";
    }
    else if ((x % 2 == 0) && (y % 2 == 1)) {
      chessboard[x][y] = "X";
    }
    else if ((x % 2 == 1) && (y % 2 == 0)) {
      chessboard[x][y] = "X";
    }
  }
}
```
If you tried to access each row/column index, then you would need to have 64 lines of code in your program to assigned each row/column pair of indices either O or X.
```cpp
chessboard[0][0] = "O";
chessboard[0][1] = "X";
chessboard[1][0] = "X";
chessboard[1][1] = "O";
...
```
