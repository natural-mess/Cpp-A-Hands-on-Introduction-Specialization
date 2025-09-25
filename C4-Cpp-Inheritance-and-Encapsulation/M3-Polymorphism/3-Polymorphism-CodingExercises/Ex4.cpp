// Create the Median class that has the function CalculateMedian that calculates the median of the integers passed to the function. 
// Use function overloading so that this function can accept anywhere from two to five integer parameters.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line

class Median {
  public:
    double CalculateMedian(int num1, int num2){
      nums.push_back(num1);
      nums.push_back(num2);
      sort(nums.begin(), nums.end());
      calMedVector(nums);
    }

    double CalculateMedian(int num1, int num2, int num3){
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      sort(nums.begin(), nums.end());
      calMedVector(nums);
    }

    double CalculateMedian(int num1, int num2, int num3, int num4){
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      nums.push_back(num4);
      sort(nums.begin(), nums.end());
      calMedVector(nums);
    }

    double CalculateMedian(int num1, int num2, int num3, int num4, int num5){
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      nums.push_back(num4);
      nums.push_back(num5);
      sort(nums.begin(), nums.end());
      calMedVector(nums);
    }

  private:
    vector<int> nums;

    double calMedVector(vector<int> &listNums){
      double med = 0.0;
      if (listNums.size() % 2 == 0){
        med = (double)(listNums[listNums.size() / 2] + listNums[listNums.size() / 2 - 1])/2.0;
      }
      else
      {
        med = (double)listNums[listNums.size() / 2];
      }
      listNums.clear();
      return med;
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
