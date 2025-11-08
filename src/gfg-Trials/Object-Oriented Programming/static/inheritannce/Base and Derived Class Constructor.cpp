#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    Base(int a) : x(a) {
        cout << "Base \n";
    }
};

class Derived : public Base {
private:
    int y;
public:
    Derived(int a, int b) : Base(a), y(b) {
        cout << "Derived \n";
    }
    void print() {
        cout << x << " " << y << '\n';
    }
};

int main() {
    Derived d(10, 20);
    d.print();
    return 0;
}


/* 
1. Base Class Constructor:

The Base class contains a parameterized constructor that initializes the member x and prints "Base".
2. Derived Class Constructor:

The Derived class calls the Base constructor using an initializer list to initialize x. It also initializes its own member y.
3. Program Output:

Base 
Derived 
10 20
4. Key Point:

The base class constructor is always executed first, followed by the derived class constructor.
If the base class does not have a default constructor and no explicit call to a parameterized constructor is made, the program results in a compiler error.

*/