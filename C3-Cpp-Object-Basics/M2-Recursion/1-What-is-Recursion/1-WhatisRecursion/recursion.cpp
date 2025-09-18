#include <iostream>
using namespace std;
//add function definitions below this line
/**
* Calculates factorial using recursion
*
* @param n, integer
* @return factorial of n, integer
*/
int Factorial(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * Factorial(n - 1);
    }
}

//add function definitions above this line
int main() {
    //add code below this line
    cout << Factorial(5) << endl;
    return 0;
    //add code above this line
}