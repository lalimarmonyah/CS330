# Classes and Inheritance in C++

**Objects and Naming Conventions:**
     C++ is an object-oriented programming language where everything is associated with classes and objects. Here's an example of creating a class and an object:

     ```
     class MyClass {       // The class
       public:             // Access specifier
         int myNum;        // Attribute (int variable)
         string myString;  // Attribute (string variable)
     };

     int main() {
       MyClass myObj;  // Create an object of MyClass
       myObj.myNum = 15; 
       myObj.myString = "Some text";

       cout << myObj.myNum << "\n";
       cout << myObj.myString;
       return 0;
     }
     ```

**Class Methods:**
     Methods can be defined inside or outside the class. Here are examples for both cases:

     Inside the class:

     ```
     class MyClass {
       public:
         void myMethod() {
           cout << "Hello World!";
         }
     };
     ```

     Outside the class:

     ```cpp
     class MyClass {
       public:
         void myMethod(); // Method/function declaration
     };

     void MyClass::myMethod() {
       cout << "Hello World!";
     }
     ```

**Constructor:**
     Example of a constructor in C++:     *include constructor definition*

     ```
     class MyClass {
       public:
         MyClass() {
           cout << "Hello World!";
         }
     };

     int main() {
       MyClass myObj;  // Create an object of MyClass (this will call the constructor)
       return 0;
     }
     ```
   
**Access Specifiers:**
     Access specifiers determine how attributes and methods of a class can be accessed. There are three types: `public`, `private`, and `protected`.
      Public - accessible outside the class
      Private - cannot be viewed or accessed outside the class
      Protected - can be accessed in inheritance classes, but cannot otherwise
      
*Note: Can access private members using public methods in the same class using encapsulation*


**Inheritance:**
     Inheritance is used for code reusability. 
     - Parent class called the ‘base class’ 
        - Class being inherited from
     - Child class called the ‘derived class’
        - Class inheriting from another class
     
     Example of single inheritance:

     ```
     // Base class
     class Vehicle {
       public:
         string brand = "Ford";
         void honk() {
           cout << "Tuut, tuut! \n";
         }
     };

     // Derived class
     class Car : public Vehicle {
       public:
         string model = "Mustang";
     };

     int main() {
       Car myCar;
       myCar.honk();
       cout << myCar.brand + " " + myCar.model;
       return 0;
     }
     ```
   
     Multiple inheritance and multilevel inheritance are also supported.
     - Can also inherit from a class that already inherits from another class, a ‘grandchild’ class – called multilevel inheritance

Deriving from multiple classes:

```
class MyChildClass: public MyClass, public MyOtherClass {
};
```

**Standard Methods for Functions in C++**       *move this section up before inheritance*

   C++ does not have standard methods for functions that serve a similar purpose across all objects like `toString()` in Java or `__str__` in Python.

**Method Overloading in C++**

   Method overloading in C++ allows defining multiple functions with the same name but different parameters. The resolution of overloaded method calls occurs at compile time. For more information, refer to these resources:

   - [Function Overloading in C++](https://www.geeksforgeeks.org/function-overloading-c/)
   - [Function Overloading in C++ - MyGreatLearning](https://www.mygreatlearning.com/blog/function-overloading-in-cpp/)
   - [Function Overloading - Programiz](https://www.programiz.com/cpp-programming/function-overloading)
   - [Overload Resolution in C++](https://www.ibm.com/docs/en/i/7.5?topic=only-overload-resolution-c)
