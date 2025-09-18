# The Constructor and Parameters
## The Constructor and Parameters
Now imagine that you want to use the `Actor` class to instantiate an object for Helen Mirren and Tom Hanks. Create the `Actor` class just as before.

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

Now instantiate two Actor objects, one for Helen Mirren and the other for Tom Hanks. Print the `fist_name` and `last_name` attributes for each object.

```cpp
//add code below this line
Actor helen;
Actor tom;
cout << helen.first_name << ' ' << helen.last_name << endl;
cout << tom.first_name << ' ' << tom.last_name << endl;
//add code above this line
```

The constructor `Actor` class only creates an object with information about Helen Mirren. You can make the `Actor` class more flexible by passing it an argument for each of attributes in the constructor. Parameters for the constructor function work just as they do for user-defined functions, be sure to indicate the data type for each parameter.

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
    Actor(string fn, string ln, string bd, int tf, int on, int ow)
    {
        first_name = fn;
        last_name = ln;
        birthday = bd;
        total_films = tf;
        oscar_nominations = on;
        oscar_wins = ow;
    }
};
//add class definitions above this line
```

When you instantiate the two `Actor` objects, you can pass the constructor the relevant information for both Helen Mirren and Tom Hanks. The code should now print the correct first and last names.

```cpp
//add code below this line
Actor helen("Helen", "Mirren", "July 26", 80, 4, 1);
Actor tom("Tom", "Hanks", "July 9", 76, 5, 2);
cout << helen.first_name << ' ' << helen.last_name << endl;
cout << tom.first_name << ' ' << tom.last_name << endl;
//add code above this line
```

## Default Values
We can assume that the average actor probably has not been nominated or won an Oscar. So instead of making these attributes parameters for the constructor, we can give them the default value of 0. These attributes can always be updated later on.

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
    Actor(string fn, string ln, string bd, int tf) {
        first_name = fn;
        last_name = ln;
        birthday = bd;
        total_films = tf;
        oscar_nominations = 0;
        oscar_wins = 0;
    }
};
//add class definitions above this line
```

You can update the attributes once the object has been instantiated if need be.

```cpp
//add code below this line
Actor helen("Helen", "Mirren", "July 26", 80);
cout << helen.oscar_nominations << endl;
cout << helen.oscar_wins << endl;
helen.oscar_nominations = 4;
helen.oscar_wins = 1;
cout << helen.oscar_nominations << endl;
cout << helen.oscar_wins << endl;
//add code above this line
```

