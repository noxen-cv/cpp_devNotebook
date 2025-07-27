#include <iostream>

using namespace std;


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; // Initialize an array of integers
    int *ptr = arr;

    /* Accessing Elements using pointer arithmetic
        - ptr has a memory address of the first element of the array
        - so the operation moves the address, hence the element
    */
    cout << "Value: " << *ptr << "\n" << "Address: " << ptr << endl;
    ptr++;                                                                      // Move pointer to the next element
    cout << "Value: " << *ptr << "\n" << "Address: " << ptr << endl;
    ptr--;                                                                      // Move pointer back to the previous element
    cout << "Value: " << *ptr << "\n" << "Address: " << ptr << endl;
    ptr += 2;                                                                   // Move pointer two elements forward
    cout << "Value: " << *ptr << "\n" << "Address: " << ptr << endl;
    ptr -= 2;                                                                   // Move pointer two elements back
    cout << "Value: " << *ptr << "\n" << "Address: " << ptr << endl;



    // Determine the number of elements between them
    int *pt = arr + 5; // Pointer to the 6th element of the array
    cout << (pt - ptr) << " elements between them." << endl; // Calculate the difference in elements between the two pointers


    return 0;
}