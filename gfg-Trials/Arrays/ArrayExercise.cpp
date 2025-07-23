#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    int* arr[3] = {&a, &b, &c};    //all arrays points to their perspective pointer references
    cout << *arr[*arr[1] - 8];      // Dereferencing the pointer at index 2, which is 15 
    return 0;
}


/* Few More Explanation
        *arr[*arr[1] - 8]  --> *arr[10 - 8]  --> *arr[2]  --> 15
        *arr[1] gives the value of b, which is 10. 
        Then we subtract 8 from it, resulting in 2.
        Finally, we dereference arr[2], which points to c, giving us the value 15.
*/