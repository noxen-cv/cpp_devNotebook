/* Operators in C++ (e.g., +, -, *) are designed to work with primitive data types like int, float, and char. However, C++ allows these operators to be redefined for user-defined data types, such as classes. This process is known as operator overloading.

For example, when dealing with a Complex number class, you can redefine the + operator to add two complex numbers just like you would add integers.

*/

#include <iostream>
using namespace std;

class Complex {
private:
    int r, i; // Real and imaginary parts

public:
    // Constructor with default arguments
    Complex(int r = 0, int i = 0) {
        this->r = r;
        this->i = i;
    }

    // Overloading the + operator
    Complex operator+(const Complex &c) {
        Complex ans;
        ans.r = this->r + c.r;
        ans.i = this->i + c.i;
        return ans;
    }

    // Print function to display the complex number
    void print() {
        cout << this->r << " + " << this->i << "i\n";
    }
};

int main() {
    Complex c1(2, 3), c2(3, 4); // Create two Complex objects
    auto sum = c1 + c2;         // Use overloaded + operator
    sum.print();                // Output: 5 + 7i
    return 0;
}