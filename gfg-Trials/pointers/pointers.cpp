#include <iostream>


int swap(int* a, int* b) {
    int temp = *a;   // Dereference a and store the value in temp
    *a = *b;         // Assign the value pointed to by b into the location pointed to by a
    *b = temp;       // Assign the original value of a into the location pointed to by b
    return 0;        // Return 0 to indicate success (optional)
}


int main(){
    int x = 5, y = 10;
    swap(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}
