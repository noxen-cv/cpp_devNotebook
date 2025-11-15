#include <iostream>
using namespace std;

class Employee; // Forward declaration

class Printer {
public:
    void printEmp(const Employee &e); // Declaration
};

class Employee {
private:
    int id;
    string name;

    // Granting friendship to printEmp function
    friend void Printer::printEmp(const Employee &e);

public:
    Employee(int i, string n) : id(i), name(n) {}
};

void Printer::printEmp(const Employee &e) {
    cout << e.id << " " << e.name << '\n'; // Accessing private members
}

int main() {
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e); // Output: 101 ABC
    return 0;
}