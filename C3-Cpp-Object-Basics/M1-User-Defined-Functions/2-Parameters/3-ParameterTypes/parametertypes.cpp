#include <iostream>
using namespace std;

/**
* This function adds two integers together
*
* @param num1 The first integer
* @param num2 The second integer
*/
void Add(int num1, int num2) {
    cout << num1 + num2 << endl;
}

/**
* This function prints an integer followed
* by a string
*
* @param num1 The integer
* @param num2 The string
*/
void Add(int num1, string num2) {
    cout << num1 << num2 << endl;
}

int main() {
    Add(3, 14);
    return 0;
}