# Lab: Variable Scope
## Local and Global Variables
For this lab, we are going to be adding local and global variables to our previously created `GetSlope()` function. Remember that global variables exist outside of functions while local variables exist inside functions. Depending on how you declare your local and global variables, they will behave differently per situation.

### Global Variables
First, let’s add some global variables to our program.

```cpp
double input1;
double input2;
double input3;
double input4;
```

### The GetSlope() Function
As from before, the function will still take 4 doubles as parameters named x1, y1, x2, and y2. However, we’re going to implement two different calculations within the function. Specifically, we are going to calculate the difference between the y coordinates first, then calculate the difference between the x coordinates. These calculations will then be assigned to local variables called y_change and x_change. Finally, the function will print the quotient between y_change and x_change, which is also the slope itself.

```cpp
void GetSlope(double x1, double y1, double x2, double y2) {
    double y_change = y2 - y1;
    double x_change = x2 - x1;
    cout << y_change / x_change << endl;
}
```

### Testing the Function
To make things more dynamic, we’ll actually make use of a cin within the `main()` function. `cin` will take in inputs from the user and assign them to our 4 global variables input1, input2, input3, and input4. These inputs will later correspond to x1, y1, x2, and y2. Having cin enables the user to decide what the coordinate points will be.

```cpp
int main() {
    cout << "Enter first x coordinate: " << endl;
    cin >> input1;
    cout << "Enter first y coordinate: " << endl;
    cin >> input2;
    cout << "Enter second x coordinate: " << endl;
    cin >> input3;
    cout << "Enter second y coordinate: " << endl;
    cin >> input4;
    GetSlope(input1, input2, input3, input4);
}
```

If you enter 3, 2, 5, and 6 respectively, you should get 2 since cout removes all trailing zeros.

```cpp
double input1; //global
double input2; //global
double input3; //global
double input4; //global
/**
* This function prints the slope between two sets
* of coordinate points by calculating their coordinate
* changes separately
*
* @param x1 A double of the first x-coordinate
* @param y1 A double of the first y-coordinate
* @param x2 A double of the second x-coordinate
* @param y2 A double of the second y-coordinate
* @return No return value
*/
void GetSlope(double x1, double y1, double x2, double y2) {
    double y_change = y2 - y1;
    double x_change = x2 - x1;
    cout << y_change / x_change << endl;
}

int main() {
    cout << "Enter first x coordinate: " << endl;
    cin >> input1;
    cout << "Enter first y coordinate: " << endl;
    cin >> input2;
    cout << "Enter second x coordinate: " << endl;
    cin >> input3;
    cout << "Enter second y coordinate: " << endl;
    cin >> input4;
    GetSlope(input1, input2, input3, input4);
}
```

### Program Flow
After the program is initiated, the global variables will be created first. Next, `main()` will run. Although commonly written last, `main()` will always be the first function to run by default in C++. The lines of code within `main()` will be executed in the order of their appearance.


