# Lab 1
## Lab 1 - Making the Base Class and Derived Class
In this lab, we will be creating a base class called `Line`. `Line` has only one attribute, `int length`, which is used in the class function `DrawLine`. `DrawLine` takes an integer parameter and outputs `*` as many times as specified in `length`. To retrieve `length`, we also have the getter function `GetLength`. `Line` does not have a setter function.

```cpp
//add class definitions below this line

class Line {
  public:
    Line(int l) {
      length = l;
    }
  
    int GetLength() {
      return length;
    }
  
    void DrawLine() {
      for (int i = 0; i < length; i++) {
        cout << '*';
      }
      cout << endl;
    }
  
  private:
    int length;
};

//add class definitions above this line
```

To test our `Line` class, create its object and then call the `DrawLine` function on it in main.

```cpp
  //add code below this line

  Line line(10);
  line.DrawLine();

  //add code above this line
```

The output is a line drawn with 10 `*` symbols. Next, we will create a derived class, `Box`, that inherits from `Line`.

`Box` has one attribute, int width, which will present the width of the `Box` object. The `Box` constructor takes two parameters, one of which is presented by width and the other is presented by length which is inherited from the Line constructor. `Box` has two class functions, the getter `GetWidth` and `DrawBox`. Notice how inheritance enables us to borrow functions and attributes from the base class to further extend the derived class.

`DrawBox` utilizes the width attribute to tell the system how many times to call `DrawLine`. The end result is a draw of a “box” that is created from multiple "lines".

```cpp
//add class definitions below this line

class Line {
  public:
    Line(int l) {
      length = l;
    }
  
    int GetLength() {
      return length;
    }
  
    void DrawLine() {
      for (int i = 0; i < length; i++) {
        cout << '*';
      }
      cout << endl;
    }
  
  private:
    int length;
};

class Box : public Line {
  public:
    Box(int l, int w) : Line(l) {
      width = w;
    }
  
    int GetWidth() {
      return width;
    }
  
    void DrawBox() {
      for (int i = 0; i < width; i++) {
        DrawLine();
      }
    }
  
  private:
    int width;
};

//add class definitions above this line
```

Run the code below in `main` to see the output.

```cpp
  //add code below this line

  Box box(10, 10);
  box.DrawBox();

  //add code above this line
```



