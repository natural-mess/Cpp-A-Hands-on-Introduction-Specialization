# The Constructor
## Too Much Code
Imagine that the `Actor` class has more attributes than on the previous page.
```cpp
//add class definitions below this line
class Actor {
    public:
        string first_name;
        string last_name;
        string birthday;
        int total_films;
        int oscar_nominations;
        int oscar_wins;
};
//add class definitions above this line
```

Now create an object for Helen Mirren with values for each attribute. Adding each attribute individually requires several lines of code. This is especially true if you have more than one instance of the `Actor` class.

```cpp
//add code below this line
Actor helen;
helen.first_name = "Helen";
helen.last_name = "Mirren";
helen.birthday = "July 26";
helen.total_films = 80;
helen.oscar_nominations = 4;
helen.oscar_wins = 1;
cout << helen.first_name + ' ' + helen.last_name << endl;
//add code above this line
```

The class `Actor` creates a class and its attributes. It does not assign value to any attributes; the user has to do this. A class is supposed to be a blueprint. It should lay out all of the attributes and their values for the user. Classes can do this when you use the constructor.

## The Constructor
The constructor is a special function for a class. Its job is to assign value for attributes associated with the object. These attributes can also be called instance variables. In C++, the constructor is the class name, parentheses, and curly brackets. Inside of the constructor, give attributes their values.

```cpp
//add class definitions below this line
class Actor {
    public:
        string first_name;
        string last_name;
        string birthday;
        int total_films;
        int oscar_nominations;
        int oscar_wins;
    Actor() {
        first_name = "Helen";
        last_name = "Mirren";
        birthday = "July 26";
        total_films = 80;
        oscar_nominations = 4;
        oscar_wins = 1;
    }
};
//add class definitions above this line
```

Instantiating `helen` as an instance of the `Actor` class automatically calls the constructor. Since the instance variables (attributes) have values, you can remove those lines of code from the `main` function.

```cpp
//add code below this line
Actor helen;
cout << helen.first_name + ' ' + helen.last_name << endl;
//add code above this line
```

When you attempted to print `cout << helen.first_name + ' ' + helen.last_name + " won " + helen.oscar_wins + " Oscar out of " + helen.oscar_nominations + " nominations" << endl;`, you likely received a very long error message. This happened because the operator `+` only works with same-type objects or data. In the print statement above, you tried to combine strings with integers which C++ did not like and therefore complained. To solve this, simply change the `+` to `<<`.

