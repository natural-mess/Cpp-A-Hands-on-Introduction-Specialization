// Complete the program so that it takes in 4 integers (a, b, c, and d) as arguments, 
// stores them in the 2D array nums, 
// and then prints their row, column, 
// and total sums. 
// The program should print the integers according to this formula:

// (a)   (b)   (a+b)
// (c)   (d)   (c+d)
// (a+c) (b+d) ((a+b)+(c+d)+(a+c)+(b+d))

// (a+b) is the first row's sum
// (c+d) is the second row's sum
// (a+c) is the first column's sum
// (b+d) is the second column's sum.
// ((a+b)+(c+d)+(a+c)+(b+d)) is the total sum of all rows and columns

// For example, arguments 1, 2, 3, and 4 will produce the output:

// 1 2 3
// 3 4 7
// 4 6 20

// 1 + 2 = 3 (first row's sum)
// 3 + 4 = 7 (second row's sum)
// 1 + 3 = 4 (first column's sum)
// 2 + 4 = 6 (second column's sum)
// ((1+2) + (3+4) + (1+3) + (2+4)) = 20 (total sum)

// where 3 and 7 are row sums, 4 and 6 are column sums, and 20 is the total sum.

// Arguments 9, 8, 7, and 6 will produce the output:
// 9 8 17
// 7 6 13
// 16 14 60

// 9 + 8 = 17 (first row's sum)
// 7 + 6 = 13 (second row's sum)
// 9 + 7 = 16 (first column's sum)
// 8 + 6 = 14 (second column's sum)
// ((9+8) + (7+6) + (9+7) + (8+6)) = 60 (total sum)
// where 17 and 13 are row sums, 16 and 14 are column sums, and 60 is the total sum.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int c = atoi((argv[3]));
  int d = atoi((argv[4]));
  int nums[3][3];
  
  //add code below this line

  nums[0][0] = a;
  nums[0][1] = b;
  nums[0][2] = a+b;
  nums[1][0] = c;
  nums[1][1] = d;
  nums[1][2] = c+d;
  nums[2][0] = a+c;
  nums[2][1] = b+d;
  nums[2][2] = nums[0][2] + nums[1][2] + nums[2][0] + nums[2][1];

  //add code above this line
  
  int row = sizeof(nums) / sizeof(nums[0]);
  int col = sizeof(nums[0]) / sizeof(int);
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == 2) {
        cout << nums[i][j] << endl;
      }
      else {
        cout << nums[i][j] << " ";
      }
    }
  }
  
  return 0;
  
}
