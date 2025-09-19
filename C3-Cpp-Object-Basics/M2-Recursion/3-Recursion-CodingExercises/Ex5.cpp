// Write a recursive function called GetMax() that takes a vector of integers as a parameter. 
// Then it returns the largest integer in the array.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line

int GetMax(vector<int>& num)
{
  if (num.size() == 1)
  {
    return num.at(0);
  }
  vector<int> new_num(num.begin()+1, num.begin() + num.size());
  return max(num.at(0), GetMax(new_num));
  
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
