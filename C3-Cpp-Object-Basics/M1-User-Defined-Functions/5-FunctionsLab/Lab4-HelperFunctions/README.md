# Lab: Helper Functions
## Purpose of Helper Functions
When a function calls another function, it is using that function to help it perform a particular action. Helper functions provide users with more flexibility when it comes to developing functions. Additionally, helper functions help reduce code repetition because the same action only has to be written once. Let’s start by creating a few helper functions that will help us with other functions later.

```cpp
/**
* This function returns the difference in y values
*
* @param y1 A double of the first y-coordinate
* @param y2 A double of the second y-coordinate
* @return The difference of y1 and y2 as a double
*/
double GetRise(double y1, double y2) {
    return y2 - y1;
}
/**
* This function returns the difference in x values
*
* @param x1 A double of the first x-coordinate
* @param x2 A double of the second x-coordinate
* @return The difference of x1 and x2 as a double
*/
double GetRun(double x1, double x2) {
    return x2 - x1;
}
```

Above, we have two functions. One that calculates the rise of a slope and another that calculates the run of a slope. These two helper functions will come in handy in out later slope calculations.

## Using Helper Functions
```cpp
/**
* This function returns the slope in decimal form
*
* @param x1 A double of the first x-coordinate
* @param y1 A double of the first y-coordinate
* @param x2 A double of the second x-coordinate
* @param y2 A double of the second y-coordinate
* @return A double expression of the slope
*/
double GetSlopeDecimal(double x1, double y1, double x2, double y2) {
    return GetRise(y1, y2) / GetRun(x1, x2);
}

/**
* This function returns the slop in fraction form
*
* @param x1 A double of the first x-coordinate
* @param y1 A double of the first y-coordinate
* @param x2 A double of the second x-coordinate
* @param y2 A double of the second y-coordinate
* @return A string expression of the slope in rise / run format
*/
string GetSlopeFraction(double x1, double y1, double x2, double y2) {
    return to_string(GetRise(y1, y2)) + " / " + to_string(GetRun(x1, x2));
    //need to convert doubles to strings!
}
```

Notice how within the two functions above `GetSlopeDecimal()` and `GetSlopeFraction()`, the previous helper functions `GetRise()` and `GetRun()` are called. Having 4 functions at our disposal provides us with a flexibility that a single function cannot offer. In this program, we can get the slope in its decimal form and its fraction form in addition to the rise and run individually. If we wanted, we can continue to build more into this program.

## Complete and Run the Program
```cpp
double input1;
double input2;
double input3;
double input4;
/**
* This function returns the difference in y values
*
* @param y1 A double of the first y-coordinate
* @param y2 A double of the second y-coordinate
* @return The difference of y1 and y2 as a double
*/
double GetRise(double y1, double y2) {
    return y2 - y1;
}
/**
* This function returns the difference in x values
*
* @param x1 A double of the first x-coordinate
* @param x2 A double of the second x-coordinate
* @return The difference of x1 and x2 as a double
*/
double GetRun(double x1, double x2) {
    return x2 - x1;
}
/**
* This function returns the slope in decimal form
*
* @param x1 A double of the first x-coordinate
* @param y1 A double of the first y-coordinate
* @param x2 A double of the second x-coordinate
* @param y2 A double of the second y-coordinate
* @return A double expression of the slope
*/
double GetSlopeDecimal(double x1, double y1, double x2, double y2) {
    return GetRise(y1, y2) / GetRun(x1, x2);
}
/**
* This function returns the slop in fraction form
*
* @param x1 A double of the first x-coordinate
* @param y1 A double of the first y-coordinate
* @param x2 A double of the second x-coordinate
* @param y2 A double of the second y-coordinate
* @return A string expression of the slope in rise / run format
*/
string GetSlopeFraction(double x1, double y1, double x2, double y2) {
    return to_string(GetRise(y1, y2)) + " / " + to_string(GetRun(x1, x2));
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
    cout << "Rise: ";
    cout << GetRise(input2, input4) << endl;
    cout << "Run: ";
    cout << GetRun(input1, input3) << endl;
    cout << "Calculated form: ";
    cout << GetSlopeDecimal(input1, input2, input3, input4) << endl;
    cout << "Slope form: ";
    cout << GetSlopeFraction(input1, input2, input3, input4) << endl;
}
```


