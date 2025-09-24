# Function Overriding
## What is Polymorphism?
Polymorphism is a concept in object-oriented programming in which a single interface takes different forms (polymorphism means “many forms”). Often this means similar operations are grouped together with the same name. However, these operations with the same name will produce different results. You have already encountered a few examples of polymorphism. Enter the following code into the IDE.

```cpp
  //add code below this line
   
  int a = 5;
  int b = 10;
  cout << (a + b) << endl;
    
  string c = "5";
  string d = "10";
  cout << (c + d) << endl;
  
  bool e = true;
  bool f = false;
  cout << (e + f) << endl;
  
  //add code above this line
```

Notice how the plus operator (`+`) can add together two numbers, concatenate two strings, and add two booleans. You have a single interface (the plus operator) taking different forms — one that works with integers, another that works with strings, and even one that works with booleans. This is an example of polymorphism.

### Operator Overloading
Because the plus operator can work with different forms, we can say that it is overloaded. C++ overloads this operator by default. However, a user cannot manually overload an operator.

