#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello World";
    }
};

int main() {
    MyClass obj;      // create an object of MyClass
    obj.display();    // call the display() function
    return 0;
}
