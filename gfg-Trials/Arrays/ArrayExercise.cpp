#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    int* arr[3] = {&a, &b, &c};    //all arrays points to their perspective pointer references
    cout << *arr[*arr[1] - 8];      // Dereferencing the pointer at index 2, which is 15 


/* Few More Explanation
        *arr[*arr[1] - 8]  --> *arr[10 - 8]  --> *arr[2]  --> 15
        *arr[1] gives the value of b, which is 10. 
        Then we subtract 8 from it, resulting in 2.
        Finally, we dereference arr[2], which points to c, giving us the value 15.
*/

    int array[] = {20, 30, 40};
    cout << -array[2];              // answer: -40 | // Accessing the third element of the array and just negating it
    



    int array1[] = {1200, 200, 2300, 1230, 1543};
    int array2[] = {12, 14, 16, 18, 20};
    int temp, result = 0;

        for (temp = 0; temp < 5; temp++) 
        {
            result += array1[temp];         // Adding all elements of array1
        }

        for (temp = 0; temp < 4; temp++)
        {
            result += array2[temp];         // Adding all elements of array2
        }

    cout << result;                     // Output the final result of the addition




    cout << endl;
    
    int array[] = {1, 2, 3, 4, 5};
    int n, result = 0;
    
    for (n = 0; n < 5; n++) {
        result += array[n];
        cout << result << " ";
    }
    
    return 0;
}

