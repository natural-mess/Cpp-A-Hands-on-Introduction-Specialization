# Effects of Inheritance Types 2
## How Inheritance Works
Now that you’re more comfortable with access modifiers, let’s take a look at how inheritance types affect derived classes. Make sure your `Derived` and `main` code look like what’s below. Note that `Derived` now inherits from `Base` through `protected` inheritance instead of `public`.

```cpp
//add class definitions below this line

class Derived : protected Base {
  public:
    void ReturnPublic(string s) {
      Public(s_derived);
    }
  
    void ReturnProtected(string s) {
      Protected(s_derived);
    }
  
  private:
    string s_derived;
};

//add class definitions above this line
```

```cpp
  //add code below this line
  
  string s_main;
  Derived dc;
  dc.ReturnProtected(s_main);
  dc.Public(s_main);

  //add code above this line
```

You’ll notice that an error is produced saying that `‘Base’ is not an accessible base of ‘Derived’`. This occurs because when a derived class inherits from a base class through protected inheritance, all public and protected members of the base class become `protected` in the derived class. This means that the `Public` function within `Derived` was inherited as a protected function and is therefore no longer accessible within main.

On the other hand, `ReturnProtected` is still a public function within `Derived`, which allows main to access it even though it calls the protected function `Protected` from Base. Comment out the command `dc.Public(s_main);` and run the code again to see the result.

Though not explicitly shown, `Derived` can be represented like this:

```cpp
class Derived : protected Base {
  public:
    void ReturnPublic(string s) {
      Public(s_derived);
    }
  
    void ReturnProtected(string s) {
      Protected(s_derived);
    }
  
  /*protected:
    void Public(string s) { (inherited as protected from Base)
      s = "public";
      cout << s << endl;
    }
  
    void Protected(string s) { (inherited as protected from Base)
      s = "protected";
      cout << s << endl;
    }*/
  
  private:
    string s_derived;
};
```

If you ever get confused with inheritance types, you can always imaginatively rewrite all of the functions that were inherited and label them appropriately to help you visualize the derived class better. Here are some more examples:

```cpp
class Base {
  public:
    int x;
  
  protected:
    int y;
  
  private:
    int z;
};

class Derived : public Base {
  //public:
    //int x;
  
  //protected:
    //int y;
};
```

```cpp
class Base {
  public:
    int x;
  
  protected:
    int y;
  
  private:
    int z;
};

class Derived : protected Base {
  //protected:
    //int x;
    //int y;
};
```

```cpp
class Base {
  public:
    int x;
  
  protected:
    int y;
  
  private:
    int z;
};

class Derived : private Base {
  //private:
    //int x;
    //int y;
};
```

Note that private members are never inherited. Also, the examples are provided to help you visualize what the derived classes look like after inheritance. If you were to actually add the member attributes into `Derived` without comments, those attributes will count as being part of the `Derived` class instead of being inherited from the `Base` class.



