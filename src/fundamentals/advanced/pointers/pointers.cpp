#include <iostream>


int swap(int* a, int* b) { // Function to swap two integers using pointers
    int temp = *a;   // Dereference a and store the value in temp
    *a = *b;         // Assign the value pointed to by b into the location pointed to by a
    *b = temp;       // Assign the original value of a into the location pointed to by b
    return 0;        // Return 0 to indicate success (optional)
}



int main(){
    int x = 5, y = 10;
    swap(&x, &y);           // Gives memory address of x an y
    std::cout << "x: " << x << ", y: " << y << std::endl;

    // Demonstrating pointer to an array
    int a[] = {1, 2, 3};                // Declares and initializes an array of integers
    int *p1 = a;                        // Pointer to the first element of the array, or the array itself
    int (*p2)[3] = &a;                  // Pointer to the entire array, array size must be specified


    /* Ways to access and output the first element
        By using pointer arithmetic or using array indexing
    */
   
    // Using p1
    std::cout << p1[0] << std:: endl;   // Array Indexing 
    std::cout << *p1 << std:: endl;     // dereference the pointer to access the first element
    
    // Using p2
    std::cout << (*p2)[0] << std:: endl; // array indexing
    std::cout << **p2 << std:: endl; // dereference the pointer to the array and access the first element



    // Ways to access and output second element and beyond
    // Using p1
    std::cout << p1[1] << std::endl;   // Array Indexing
    std::cout << *(p1+1) << std:: endl; // pointer arithmetic, dereference the pointer to access the second element

    // Using p2
    std::cout << *(*p2+1) << std:: endl; // pointer arithmetic, dereference the pointer to the array and access the second element

    return 0;
}



/* Differences of Pointer arithmetic and Array indexing
   1. Syntax:
      - Pointer Arithmetic: Uses pointers and arithmetic operations.
        Example: *(p1 + 2) to access the third element.
      - Array Indexing: Uses array subscript notation.
        Example: a[2] to access the third element.

   2. Flexibility:
      - Pointer Arithmetic: More flexible, can easily navigate through memory.
      - Array Indexing: Less flexible, limited to the array's bounds.

   3. Use Cases:
      - Pointer Arithmetic: Commonly used in dynamic memory allocation and data structures.
      - Array Indexing: Simpler and more readable for fixed-size arrays.
*/