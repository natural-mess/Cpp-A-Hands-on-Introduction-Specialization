# Lab 1
## Lab 1
For this lab, you will create a Student class that has the following private class attributes:
- string name - name of the student
- int grade - student’s grade level
- int score - test score of the student

First, let’s put together all of the class attributes

```cpp
class Student {
    private:
        string name;
        int grade;
        int score;
};
```

Next, let’s define the constructor `Student` with two parameters `string n` for the student’s name and `int g` for the student’s grade.

```cpp
class Student {
    public:
    Student(string n, int g) {
        name = n;
        grade = g;
    }
    private:
        string name;
        int grade;
        int score;
};
```


