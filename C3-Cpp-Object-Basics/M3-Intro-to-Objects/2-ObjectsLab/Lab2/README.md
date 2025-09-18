# Lab 2
## Lab 2: Building a Constructor
Defining an object and then having to use dot notation to assign values to it every time can be a long and difficult task. To help alleviate that issue, we can build a constructor to help us create an object with specified attributes.

## A Default Constructor
A constructor works similarly to a function in that you can define parameters within the constructor. Then when it’s time to call the constructor, you can just simply give it the appropriate arguments and the object can be made. Let’s return to our `Student` object.

```cpp
//add class definitions below this line
class Student {
    public:
        string name;
        int ID;
        string major;
        double GPA;
        int age;
        int YOG;
    Student() {
        name = "Andy";
        ID = 123456;
        major = "Computer Science";
        GPA = 3.45;
        age = 22;
        YOG = 2021;
    }
};
//add class definitions above this line
int main() {
    //add code below this line
    Student mary;
    cout << mary.name << "'s student ID is " << mary.ID << "." <<endl;
    mary.name = "Mary";
    mary.GPA = 3.78;
    cout << mary.name << " has a current GPA of " << mary.GPA << "." << endl;
    //add code above this line
    return 0;
}
```

Before, we had to use dot notation to assign values to our object. But having the constructor, we can build it in a way that it will have default values when the object is created. However, notice how the object mary has all of the attributes of andy.

## Constructors with Parameters
The default constructor makes all objects an `andy` object when they are built. To change the attributes of the object, we can still use dot notation (i.e. `mary.name = "Mary";`). However, most Students are unique and to have to reassign value every time a default constructor is used can still be a small challenge.

To make the constructor more flexible, we can give it parameters. A constructor with parameters works similarly to a user-defined function in which you provide the parameter types and the user simply has to provide the arguments.

```cpp
//add class definitions below this line
class Student {
    public:
        string name;
        int ID;
        string major;
        double GPA;
        int age;
        int YOG;
    Student(string n, int id, string m, double g, int a, int y) {
        name = n;
        ID = id;
        major = m;
        GPA = g;
        age = a;
        YOG = y;
    }
};
//add class definitions above this line
int main() {
    //add code below this line
    Student andy("Andy", 123456, "Computer Science", 3.45, 22, 2021);
    Student mary("Mary", 456789, "Mathematics", 3.78, 21, 2022);
    cout << mary.name << " is a student in the " << mary.major << " department." << endl;
    cout << mary.name << " is a junior while " << andy.name << "is a senior." << endl;
    //add code above this line
    return 0;
}
```
A constructor with parameters enables the user to decide what attributes to assign right when the object is created. The user just has to provide those attributes as arguments in parentheses (i.e. `Student mary("Mary", 456789, "Mathematics", 3.78, 21, 2022);`).

