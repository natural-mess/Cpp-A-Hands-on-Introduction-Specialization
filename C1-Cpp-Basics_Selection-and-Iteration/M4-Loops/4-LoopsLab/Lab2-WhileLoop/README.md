# Lab: While Loop
## Tutorial Lab 2: The While Loop

```cpp
int counter = 0;
while (counter < 10) {
  cout << counter << endl;
  counter = counter + 1;
}
cout << "while loop ended" << endl;
```

1. A counter variable is initialized to keep track of how many times the loop will be executed.
2. The loop will run as long as counter is less than 10.
3. Each time the loop runs, the integer value of counter is printed to the screen.
4. The value of counter is then incremented by 1.
5. When counter reaches 10, the boolean expression no longer evaluates to true and the program will exit the loop.
6. Before the program terminates, a statement is printed to the screen, indicating that the while loop has ended.
7. Recall that the while loop must have an exit condition. By incrementing the counter variable, we ensure that the loop will eventually end. If we do not increment counter in this loop, we will create an infinite loop because counter will never reach 10 or greater.