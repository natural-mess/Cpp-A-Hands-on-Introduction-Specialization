#include <iostream>
using namespace std;
/**
* This function adds the first two integers together,
* then subtracts the third integer
*
* @param num1 The first integer
* @param num2 The second integer
* @param num3 The third integer
*/
void AddSub(int num1, int num2, int num3) {
    cout << num1 + num2 - num3 << endl;
}

int main() {
    AddSub(5, 10, 15);
    return 0;
}