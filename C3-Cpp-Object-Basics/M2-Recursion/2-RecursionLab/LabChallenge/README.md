# Lab Challenge
## Lab Challenge
Problem

Write a recursive function called `RecursivePower()` that takes two integers as parameters. The first parameter is the base number and the second parameter is the exponent. Return the base number parameter to the power of the exponent.

```cpp
#include <iostream>
using namespace std;
//add function definitions below this line
//add function definitions above this line
int main(int argc, char** argv) {
    cout << RecursivePower(stoi(argv[1]), stoi(argv[2])) << endl;
    return 0;
}
```

Expected Output
* If the function call is `RecursivePower(5, 3)`, then the function will return 125.
* If the function call is `RecursivePower(4, 5)`, then the function will return 1024.

