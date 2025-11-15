#include <iostream>
using namespace std;

class Printer; // Forward declaration

class Employee {
private:
    int id;
    string name;

    // Granting friendship to the Printer class
    friend class Printer;

public:
    Employee(int i, string n) : id(i), name(n) {}
};

class Printer {
public:
    void printEmp(const Employee &e) {
        cout << e.id << " " << e.name << '\n'; // Accessing private members
    }
};

int main() {
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e); // Output: 101 ABC
    return 0;
}