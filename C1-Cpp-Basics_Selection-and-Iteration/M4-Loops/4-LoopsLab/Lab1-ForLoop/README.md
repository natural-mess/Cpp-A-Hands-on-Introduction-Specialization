# Lab: For Loop
## Tutorial Lab 1: Using the For Loop
```cpp
for (int x = 0; x < 11; x++) {
  if (x % 2 == 0) {
    cout << "Even" << endl;
  }
  else {
    cout << "Odd" << endl;
  }
}
```

1. The for loop runs through all the values of the variable x from 0 to 10 as specified in the loop header.
2. For each value of x, an expression is evaluated using a conditional if statement.
3. If x modulo 2 evaluates to 0, then print Even followed by a newline character.
4. If x modulo 2 does not evaluate to 0, then print Odd instead followed by a newline character.