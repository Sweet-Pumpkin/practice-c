## Exercise 11 : ft_putstr_non_printable

|Exercise 11|
|:---:|
|Turn-in directory : ex11/|
|Files to turn in : ft_putstr_non_printable.c|
|Allowed functions : write|

- Create a function that displays a string of characters onscreen. If this stirng contains characters that aren't printable, they'll have to be displayed in the shape of hexadecimals(lowercase), preceeded by a "backslash".

### For example :
```
    Coucou\ntu vas bien ?
```

### The function should display :
```
    Coucou\Oatu vas bien ?
```

- Here's how it should be prototyped :
    ```
        void ft_putstr_non_printable(char *str);
    ```
