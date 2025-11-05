#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    string address;
};

void printPointer(const Student *s) {
    cout << s->roll << " "
         << s->name << " "
         << s->address << endl;
}

void printReference(const Student *s) {
    cout << s->roll << " "
         << s->name << " "
         << s->address << endl;
}

int main() {
    Student s = {101, "Bob", "Narnia"};
    printPointer(&s); // Pass by pointer
    printReference(&s); // Pass by reference
    return 0;
}