// Write a recursive function called ListSum() that takes a vector of integers as a parameter. 
// Then it returns the sum of all of the integers in the array.

#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line

int ListSum(vector<int>& listNum)
{
  if (listNum.size() < 1)
  {
    return 0;
  }
  int newNum = listNum[listNum.size()-1];
  listNum.pop_back();
  return (newNum + ListSum(listNum));
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
