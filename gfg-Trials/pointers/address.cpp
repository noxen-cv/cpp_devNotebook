// Using Address Operators in C++
#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int* address;

    address = &a; // Storing the address of variable 'a' in pointer 'address'
    cout << "Address of Variable 'a': " << address << endl;
    cout << "Value of variable 'a': " << *address << endl; // Output the value at the address

    return 0
}