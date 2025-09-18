# Lab Challenge: Greeting Machine
You are going to develop a function that takes a vector of strings as a parameter, iterates through that vector and greets every element in it with "Hello" followed by a newline.

```cpp
#include <iostream>
#include <vector>
using namespace std;
//add code below this line

//add code above this line
int main(int argc, char** argv) {
    vector<string> names;
    for (int i = 1; i < argc; i++) {
        names.push_back(argv[i]);
    }
    SayHello(names);
}
```
