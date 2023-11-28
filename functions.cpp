// UNFINISHED

#include <iostream>
#include <string>   // to use strings in c++, you must include additional header file
using namespace std;

// write a function that takes in 2 numbers, multiplies them, and returns the output
int multiplier(int num1, int num2){
    int product = num1 * num2;
    return(product);
}

// write a recursive function (one that calculates a factorial)
int factorial(int n){
    int result = n * factorial(n-1);
    return(result);
}

// write a function that takes in a string and splits it into 2 strings, then returns both strings


// write a function that tests whether your language is pass-by-reference or pass-by-value

// call your functions and save the results of the function calls in variables
int main (){
    int multiplicationResult = multiplier(5, 5);
    cout << "Function 1 result: " << multiplicationResult << "\n";

    
}
