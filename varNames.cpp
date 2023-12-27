#include <iostream>
#include <string>
using namespace std;

int main(){
    // int
    int num = 15;
    cout << "Your int number is: " << num << "\n";
    // double - can store 15 decimal digits
    double doubleNum = 10.99;
    cout << "Your double number is: " << doubleNum << "\n";
    // float - can store 6-7 decimal digits
    float floatNum = 9.88;
    cout << "Your float number is: " << floatNum << "\n";
    // char - use single quotes
    char letter = 'F';
    cout << letter << "\n";
    // string - use double quotes
    string name = "Nyah";
    cout << "My name is " << name << ".\n" ;
    // bool
    bool boolean = true;

    //pointer variable: & address of x. * value pointed to by x
    int x = 15;
    cout << x << "\n";
    int *y = &x;
    cout << *y << "\n";
    *y= 6;
    cout << *y << "\n";

    // array
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << numbers[0] << "\n";
    numbers[0] = 9;
    cout << numbers[0] << "\n";

    // operations
    int quotient = 10/2;
    cout << "quotient: " << quotient << "\n";
    int sum = 12+4;
    cout << "sum: " << sum << "\n";
    int product = 5*5;
    cout << "product: " << product<<"\n";
    int difference = 10-7;
    cout << "difference: " << difference<<"\n";
    int modulo = 6%2;
    cout<< "modulo: " << modulo << "\n";

    // int and double operations
    int g = 6/5;
    cout<<g << "\n";
    double v = 10.5/5.5;
    cout << v << "\n";
    double o = 125.5/5;
    cout<<o<<"\n";
    int w = 12.89 + 8;  // narrowing conversion
    cout << w<<"\n";
    double r = 34.98 + 7;   // widening conversion
    cout << r << "\n";

    return 0;

}
