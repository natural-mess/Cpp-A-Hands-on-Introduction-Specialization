# Encapsulation Lab 2
In this next lab, we’ll continuing building our `Words` class to include a getter and setter. These should be `public` to enable the `main` function to call them.

First, we should determine what attribute to get and set. We currently have only one attribute, `list_of_words`, which is used to store the list of strings. However, what if we want to get a particular string? Or perhaps, set a particular string at an index?

To be able to return a string from the vector, we’ll need to specify an index or position. This means our getter function will need to take in an integer parameter. However, there is a limitation to the index we can specify. We cannot specify an index position that does not exist. Therefore, we’ll need to validate the given parameter before returning anything.

```cpp
string GetString(int i) {
  if (i >= list_of_words.size()) {
    return "No string exists at this index.";
  }
  return list_of_words.at(i);
}
```

`GetString` checks to see if the index exists before it returns a string within the vector. If the index does not exist, `No string exists at this index.` will be returned to the user. Otherwise, the function will return the string at the specified index.

Next, let’s create our setter. This setter function will first check to see if the index exists, then it will set a particular string specified by the user into that index. Therefore, we’ll need two parameters for our setter.

```cpp
void SetString(string s, int i) {
  if (i >= list_of_words.size()) {
    cout << "No string exists at this index." << endl;
  }
  list_of_words.at(i) = s;
}
```

Let’s test the code with the following commands in `main`.

```cpp
  //add code below this line
  
  vector<string> list = {"house", "cake", "pancake"};
  Words words(list);
  cout << words.GetString(0) << endl;
  words.SetString("mouse", 0);
  cout << words.GetString(0) << endl;

  //add code above this line
```

After the vector is accepted as a parameter, the `GetString` function is able to return the string specified at index 0. This is why house is printed. Then, `SetString` takes in `mouse` as a parameter and replaces the word at index 0 with it. `GetString` is then called again. Since `mouse` has replaced `house`, `mouse` is printed during the second call.


