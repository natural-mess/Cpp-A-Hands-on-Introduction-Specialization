#include <iostream>
using namespace std;

/**
* This function divides one integer by the other
*
* @param num1 The first integer
* @param num2 The second integer
*/
void Divide(int num1, int num2) {
try {
    if (num2 == 0) {
        throw runtime_error("Cannot divide by zero.");
    }
    else {
        cout << num1 / num2 << endl;
    }
    }
    catch (runtime_error& e) 
    {
        cout << e.what() << endl;
    }
}

int main() {
    Divide(5, 0);
    return 0;
}