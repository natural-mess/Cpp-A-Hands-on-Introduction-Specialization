# Lab Challenge
Write a program that reads a text file . This file is stored in the variable `path`.

The file contains several instances of the word `Burma`. Replace each instance of `Burma` with `Myanmar`, and print the results of this transformation. The final output of your program should be:
```
Myanmar is a country in Southeast Asia.
The capital of Myanmar is Naypyidaw.
Its population is about 54 million people.
Myanmar is a former British colony.
```
You can use the `FindAndReplace()` function to replace all instances of `Burma` with `Myanmar`. Note that you will need to store the content of the file into a string in order to use this function.

```cpp
void FindAndReplace(string& lines, string burma, string myanmar) {
  // Get the first string occurrence
  size_t pos = lines.find(burma);
  // Repeat till end of string
  while( pos != string::npos) {
    // Replace this occurrence of Sub String
    lines.replace(pos, burma.size(), myanmar);
    // Get the next occurrence from the current position
    pos = lines.find(burma, pos + myanmar.size());
  }
}
```

- Creates a string variable lines to store the final output.
- Creates an ifstream to open and store the text file.
- Creates a string variable read to temporarily store the buffered content.
- Throws an exception if the file cannot be opened.
- Iterates through the file and stores the tokens into read with a newline delimiter.
- Stores all of the tokens into lines including the newline character.
- Closes the file.
- Performs the function `FindAndReplace()` on the string lines to replace Burma with Myanmar.
- Prints the final output lines.