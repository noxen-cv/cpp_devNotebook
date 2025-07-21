#include <iostream>
#include <string>


// Functions in C++

 // Function with no arguments;
 void greet() {
    std::cout << "Hello, World!" << std::endl;
 }

 // Function with argument parameters
 void greetUser(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl; 

 }

 // Function with return type
int returnValue(int a, int b) {
      return a + b;
}


// Default Arguments
int defaultValue(int a, int b = 10) {
    return a + b;
}

// Function Overloading defining multiple versions but parameters differs, not just return type.
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {


 }