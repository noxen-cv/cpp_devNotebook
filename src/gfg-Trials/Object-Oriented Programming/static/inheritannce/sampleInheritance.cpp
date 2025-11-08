#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int id;

public:
    Person(string n, int i) : name(n), id(i) {}
};

class Student : public Person {
private:
    int marks;

public:
    Student(string n, int i, int m) : Person(n, i), marks(m) {}

    void print() {
        cout << name << " " << id << " " << marks << endl;
    }
};

int main() {
    Student stu("Rahul", 1001, 88);
    stu.print();
    return 0;
}


/*
Access Specifiers in Inheritance

Access specifiers (public, protected, private) determine the visibility of base class members in the derived class.

1. Public Inheritance:

Effect:
public members of the base class remain public in the derived class.
protected members of the base class remain protected in the derived class.
Usage: Suitable when the derived class represents an "is-a" relationship with the base class.
2. Protected Inheritance:

Effect:
public and protected members of the base class become protected in the derived class.
Usage: Used when the base class functionality should only be accessible within the derived class or its further subclasses.
3. Private Inheritance:

Effect:
public and protected members of the base class become private in the derived class.
Usage: Used when the derived class wants to hide the base class functionality from external access.
The protected Access Specifier

The protected specifier is particularly useful in inheritance. Members marked as protected are:

Accessible within the base class.
Accessible within derived classes.
Not accessible outside the class hierarchy.
In the above example, name and id are marked as protected in Person, allowing Student to access them directly.
 */