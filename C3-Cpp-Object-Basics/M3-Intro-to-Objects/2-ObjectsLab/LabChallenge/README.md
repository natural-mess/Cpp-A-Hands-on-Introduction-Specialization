# Lab Challenge
## Lab Challenge
Create the variable `dog1`, and instantiate it as an object of the `Dog` class. This dog’s name is Marceline and she is a `German Shepherd`. Create the variable `dog2` and make it a copy of `dog1`. `dog2` should be named Cajun and have the breed B`elgian Malinois`.

Your goal for this assignment is to design the class `Dog` so that the above can be implemented successfully.

## Expected Output
Test your code by printing the `name` and `breed` of each dog to make sure they fulfill the requirements above. Most importantly, the third print statement will print `false`.

```bash
Marceline German Shepherd
Cajun Belgian Malinois
false
```

```cpp
Dog dog1("Marceline", "German Shepherd");
Dog dog2 = dog1;
dog2.name = "Cajun";
dog2.breed = "Belgian Malinois";
cout << dog1.name << " " << dog1.breed << endl;
cout << dog2.name << " " << dog2.breed << endl;
if (dog1.name == dog2.name && dog1.breed == dog2.breed) {
    cout << boolalpha << true;
}
else {
    cout << boolalpha << false;
}
```
