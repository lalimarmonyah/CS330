*needs to be fixed*

## Functions

What is the syntax for declaring a function in your language?
- To declare a function in C++, write in the data type of what you want the function to return, followed by the name of the function and a pair of parentheses. Afterwards, put curly brackets, which is the body of the function and where you will add code that defines what the function is supposed to do.
  
*Code example*

Are there any rules about where the function has to be placed in your code file so that it can run?
- Function should be declared before use.
  
Does your language support recursive functions?
- Yes
  
Can functions in your language accept multiple parameters?  Can they be of different data types?
- Yes
  
Can functions in your language return multiple values at the same time?  How is that implemented?  If not, are there ways around that problem?  What are they?
- No, C++ is not able to return multiple values at the same time. Some ways to get around this problem is by using multiple arguments passed by reference as well as packaging them in a tuple or a struct.
  - https://cplusplus.com/forum/beginner/272033/
  - https://www.tutorialspoint.com/returning-multiple-values-from-a-cplusplus-function 
Is your language pass-by reference or value?  Check your code against outside sources in case there is anything tricky going on (like in Perl).
- By default, C++ is pass-by-value. However, you can also pass by reference by using an ampersand ‘&’. 
  - https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-pass-by-value
  - https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-pass-by-reference-c-only
https://www.tutorialspoint.com/cplusplus/cpp_function_call_by_value.htm#:~:text=By%20default%2C%20C%2B%2B%20uses%20call,used%20to%20call%20the%20function. 
    - Code examples

Where are the arguments, parameters and local variables stored (value-on-stack, ref-to-heap-on stack) during execution?
- Function arguments, parameters, and local variables are stored in the stack in the order in which they are accessed by the function
  
What are the scoping rules in your language (visibility and lifetime of variables before, during and after code blocks)?
- Scope is defined as the extent up to which something can be worked with. The scope of a variable is defined as the extent of the program code within which the variable can be accessed. 
- 2 types of variable scopes: global and local variables
  - Local variables cannot be accessed or used outside the block of code in which they are declared
  - Global variables are available throughout the lifetime of a program
    - Declared outside all functions and blocks, at the top of the program
https://www.geeksforgeeks.org/scope-of-variables-in-c/ 
https://sites.google.com/site/computerbookscentre/scope-rules

Are side-effects possible? Are there guard rails against side-effects?
- Side effect is anything that isn’t the return value of the expression
- Yes, possible
- https://purple.niagara.edu/boxer/essays/prog/side-eff.htm#:~:text=Other%20ways%20in%20which%20side 
Where are local variable values stored? (on the stack? On the heap?)
- stack
Are there any other aspects of functions in your language that aren't specifically asked about here, but that are important to know in order to write one?  What are they? (e.g. dynamic vs static scope)
