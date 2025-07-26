/* A quick exercise for Pointer*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person {
    string name;
    int age;
    int number;

    public:
        Person() = default; // Default constructor
        Person(string n, int a, int num) : name(n), age(a), number(num) {}

     void display() {
        cout << "Name: " << name << "\n Age: " << age << "\n Number: " << number << endl;
     }


     void swap(Person** p1, Person** p2) {
        Person* temp = *p1;
        *p1 = *p2;
        *p2 = temp;
     }
     
};

void introDisplay(){} // created body at the end of the program
int selection(int choice) {}

int main() {
    Person p;
    string name;
    int age, number;
    Person* p1 = nullptr;
    Person* p2 = nullptr;
    int choice;

    introDisplay();
    do {
        choice = 0;
        selection(choice);
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number: ";
        cin >> number;
        cin.ignore();


        p1 = new Person(name, age, number);
        p2 = new Person(name, age, number);

        p1->display();
        cout << endl;
        p2->display();

        cout << "Swapping Person Information" << endl;
        p.swap(&p1, &p2);

        p1->display();
        cout << endl;
        p2->display();

    } while (choice != 3);
    return 0;

    delete p1;
    delete p2;
    cout << "Memory deallocated." << endl;

}


void introDisplay() {
        cout << "Person Information Registration\n";
        cout << "Using CLI\n";
        cout << "-------------------------\n";
        cout << "-------------------------\n";
        cout << "made by Christian Valenzuela\n";
}

int selection(int choice) {
    cout << "Select an option:\n";
    cout << "1. Add Person\n";
    cout << "2. Display Person\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();
    return choice;
}
