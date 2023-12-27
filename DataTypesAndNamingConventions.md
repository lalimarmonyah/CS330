## Introduction

C++ is a statically, strongly, and explicitly typed language. Good names in the program provide for better readability. Consistency is key so a tip would be to
name all functions similarly (only use camel case or snake case), and name classes differently.

## Data Types

- When creating variables in C++, you have to declare its type first and foremost, like Java.
- C++ has ints, floats, doubles, chars, strings, and bools.
- The difference between floats and doubles is that a float can only store 6-7 deicimal digits while doubles can store up to 15.
- Char is declared by putting single quotes while strings are created by putting double quotes.
- A pointer is a variable that stores the memory address as its value.
  - Pointers are created by putting `*` after declaring the type and before the name of the variable. For example: `int* num = 0`.
- All objects in C++ are mutable.

'
    int num = 15;
    cout << "Your int number is: " << num << "\n";
'

## Naming Conventions

### General Names

- Names can contain letters, digits, and underscores.
- Names must begin with a letter or an underscore (`_`).
- Names are case-sensitive (e.g., `myVar` and `myvar` are different variables).
- Names cannot contain whitespaces or special characters like `!`, `#`, `%`, etc.
- Reserved words (like C++ keywords, such as `int`) cannot be used as names.

### Variables, Classes, and Functions

- Variable names should begin with a letter and can have numbers but should always begin with a letter.
- Use snake_case and camelCase for variable and function names, but avoid underscores in class names.
- Function names should begin with a verb and the first character should be in lowercase.
- Class names should begin with an Uppercase character and use uppercase as word separators (camel case)

### Constants

- Constants are used when you want a variable to be constant and read-only, preventing any changes to its value.
- To declare a constant variable, use the `const` keyword.
- Constants are typically written in all caps and separated by underscores (`_`).

## Operators

- Assignment Operator: =
- Arithmetic Operators: +, -, *, /, %, ++, --
- C++ supports both widening and narrowing conversion. For example, if you were to add an int and a double together, depending on if you declare the result as an int or double, it will support adding the two and either turn it into an int or a double.



Sources:
- [GeeksforGeeks - Naming Convention in C++](https://www.geeksforgeeks.org/naming-convention-in-c/)
- [W3Schools - C++ Data Types](https://www.w3schools.com/cpp/cpp_data_types.asp)
- [C++ Reserved Words](https://en.cppreference.com/w/cpp/keyword)
