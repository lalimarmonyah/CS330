## Selection, Loops, and Conditions

What are the boolean values in your language? (e.g., True and False, true and false, 1, and 0, etc.) 
- true and false, true returns 1 and false returns 0

What types of conditional statements are available in your language? (if/else, if/then/else, if/elseif/else). Does your language allow for statements other than “if” (for example, Perl has an “unless” statement, which does the opposite of “if”!) 
- if/elseif/else, doesn’t allow other statements
- Ternary operator (short hand if/else): variable = (condition) ? expressionTrue : expressionFalse;

How does your language delimit code blocks under each condition in selection control statements? 
- Each condition is within curly brackets {}

Does your language use short-circuit evaluation? Include an example of the short-circuit logic working or not working (or both, if your language is like Java and supports both!) 
- Yes
- https://medium.com/@mark_91480/short-circuit-evaluation-in-c-6978c0dc332a
- https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/
  - Has code example to demonstrate short circuiting

How does your programming language deal with the “dangling else” problem? 
- https://www.quora.com/What-is-a-dangling-else-problem-in-C
- https://www.geeksforgeeks.org/dangling-else-ambiguity/
- https://cplusplus.com/forum/beginner/109598/ 

If your language supports switch or case statements, do you have to use “break” to get out of them? Can you use “continue” to have all of the conditions evaluated? 
- Uses switch statements
- Uses break to get out them
- Default code word to specify code to run if no case matches

Does your language include multiple types of loops (while, do/while, for, foreach)? If so, what are they and how do they differ from each other? 
- Uses while and for
- While loop syntax:
```
while (condition) {
  // code block to be executed
}
```

- For loop syntax:
```
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

- do/while
```
do {
  // code block to be executed
}
while (condition);
```

- Also has foreach loop, used to loop through elements in an array
```
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
```

Are loop code block variables treated differently than function code blocks? 
- Not necessarily, but variables within a function are local to that function. 
