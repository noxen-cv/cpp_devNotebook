#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int number;
    int height;

    void display() {
        cout << name << " " << number << " " << height << endl;
    }
};

// Function to swap two objects **obj1 and **obj2
void swapper(Person **obj1, Person **obj2) {
    Person *temp = *obj1;
    *obj1 = *obj2;
    *obj2 = temp;
}

int main() {
    Person p1, p2;
    cin >> p1.name >> p1.number >> p1.height;
    cin >> p2.name >> p2.number >> p2.height;

    // print original values
    p1.display();
    p2.display();

    // create pointers and swap
    Person *obj1 = &p1;
    Person *obj2 = &p2;
    swapper(&obj1, &obj2);

    // print swapped values
    obj1->display();
    obj2->display();

    return 0;
}
