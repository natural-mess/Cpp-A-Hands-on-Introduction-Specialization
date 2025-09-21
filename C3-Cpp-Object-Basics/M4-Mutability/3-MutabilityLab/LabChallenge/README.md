# Lab Challenge
Copy and paste the `Zoo` class below into the text editor.

```cpp
//add class definitions below this line

class Zoo {
  public:
    Zoo(int bc, int p, int r, int b) {
      big_cats = bc;
      primates = p;
      reptiles = r;
      birds = b;
    }
  
  private:
    int big_cats; //for "big cats"
    int primates; //for "primates"
    int reptiles; //for "reptiles"
    int birds; //for "birds"
};

//add class definitions above this line
```

Your task is to add the following class functions to the class:
- `TotalAnimals` - returns the total number of animals
- `TotalMammals` - returns the number of mammals (which includes big_cats and primates)
- `MostAnimals` - returns the name of the animal with the most count assuming no two animals have the same count

