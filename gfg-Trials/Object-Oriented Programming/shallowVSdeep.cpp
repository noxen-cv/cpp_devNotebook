#include<iostream>
using namespace std;

class Test {
private:
    int* ptr;
public:
    // Constructor
    Test(int x) {
        ptr = new int(x);
    }

    // Copy Constructor for Deep Copy
    Test(const Test &t) {
        ptr = new int(*(t.ptr));
    }

    void set(int x) {
        *ptr = x;
    }

    void print() {
        cout << *ptr << endl;
    }

    ~Test() {
        delete ptr;
    }
};

int main() {
    Test t1(10);
    Test t2 = t1; // Calls copy constructor

    t2.set(20);

    t1.print(); // Output: 10
    t2.print(); // Output: 20
    return 0;
}