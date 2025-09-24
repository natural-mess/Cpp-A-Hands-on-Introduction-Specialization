# Lab Challenge
## Problem
In the IDE to the left, the class `MP3` is already defined. Complete the class `Podcast` that inherits from `MP3`. This class should do the following things:

Inherit the constructor such that `Podcast` has the following attributes:
- `title` - a string that is the title of the episode
- `length` - an integer that has the length of the podcast in seconds
- `genre` - a string that is the genre of the podcast
- `name` - a string that is the name of the podcast
- `date` - a string that represents when the podcast was released to the public


**Hint: Connecting the Constructors**: Note that a few of the attributes are present in both the `MP3` and `Podcast` classes. To connect their constructors, you can use the same parameter values for the attributes that are the same, then use different parameter values for the attributes that are different. Finally, set the attributes to the parameters appropriately for the ones that are different. For example:

```cpp
Podcast(string t, int l, string g, string n, string d) : MP3(t, l, g, n, d) {
  name = n;
  date = d;
}
```

## Expected Output
```
The title is Hollywood Black List
The length is 1460
The genre is economics
The name is Planet Money
The date is 10 July 2020
```

