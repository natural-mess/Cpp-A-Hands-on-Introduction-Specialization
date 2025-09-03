# For Loop Syntax
## For Loop Syntax
Before you can start writing a loop, you need to be able to identify recurring patterns. Let’s take something simple:

```cpp
cout << "Hello" << endl;
cout << "Hello" << endl;
cout << "Hello" << endl;
cout << "Hello" << endl;
cout << "Hello" << endl;
```
The pattern is `cout << "Hello" << endl;`, and it is repeated five times. Since we know that the loop needs to run exactly five times, a for loop can be used. 

```cpp
for (int i = 0; i < 5; i++) {
  cout << "Hello" << endl;
}
```
Like conditionals, `for` loops are code blocks. However, in addition to a boolean statement(s), you also declare, initialize, and increment a variable called the loop iterator. All of the code that will be repeated are placed between the curly braces `{}`. It is recommended that you indent the code within the curly braces, but it is not necessary for the loop to run.

## Understanding the Loop Header
```cpp
for (int i = 0; i < 5; i++) {
  cout << "Loop #" << i << endl;
}
```
The loop ran five times, but the variable `i` did not start at `1`. Instead, it started at `0`. C++ , like most programming languages, starts counting from `0` by default. C++ will continue counting up to, but not including, `5`. The `i++` tells the system to continue counting up by `1`and the `i < 5` tells the system to stop counting before reaching `5`.

If you aren't careful, you can wind up with an infinite loop. This means that you have a loop that never ends. In the example above, if you change `i++` to `i--` then i will decrease by 1 after every iteration. This causes the loop iterator to never reach its specified value. The boolean expression continues to be true and the system continues to print until it times out. Always check your loop header to ensure that it does what you intend for it to do.

