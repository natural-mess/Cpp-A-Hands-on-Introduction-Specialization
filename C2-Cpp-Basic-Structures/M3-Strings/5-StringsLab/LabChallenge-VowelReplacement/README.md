# Lab Challenge: Vowel Replacement
## Replacing Vowels with a *
You are going to write a program that takes a string called `my_string` and returns the string but with a `*` in the place of vowels. Assume that vowels are upper and lowercase `a, e, i, o, u`. For example, if `my_string = "Hello"`, then your program will print `"H*ll*"`.

Some of the code has already been filled out for you. Your task is to complete the program so that it produces some of the sample output below. If you accidentally change anything from the original code, you can copy and paste the code back into the text editor.

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  char ch;
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
```
The first task is to iterate through my_string to check to see if any of its characters matches any of the vowels. Here, both a regular for loop and an enhanced for loop will work. Since we are working with character counts, the `==` operator should be used instead of the `find_first_of()` method.

Note that the `ch = my_string.at(i);` is optional but it will be helpful in shortening the code for our compound conditional statement when using a regular for loop. However, the enhanced for loop will result in fewer lines of code.