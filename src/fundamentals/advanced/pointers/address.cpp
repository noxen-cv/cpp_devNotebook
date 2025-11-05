// Using Address Operators in C++
#include <iostream>

using namespace std;

void updateVar(int* a) {
    *a += 10; // Dereference pointer to modify the value at the address
}

int main() {

    int a = 10;
    // int* address = nullptr; // Initialize pointer to null (optional) to hold the address of 'a'
    // Alternatively, you can directly assign the address of 'a' to the pointer
    int* address = &a;

    // Storing the address of variable 'a' in pointer 'address'
    cout << "Address of Variable 'a': " << address << endl;
    cout << "Value of variable 'a': " << *address << endl; // Output the value at the address

    updateVar(address); // Call the function with the pointer

    cout << "Updated Value of variable 'a': " << *address << endl; // Output the updated value

    return 0;
}