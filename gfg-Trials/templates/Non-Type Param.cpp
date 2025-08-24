// GFG Example

#include<iostream>
using namespace std;

template <typename T, int limit>
T arrMax(T arr[], int n) {
    if (n > limit) {
        throw "Array size exceeds limit!";
    }
    T res = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}




int main()
{
    try {
        int arr[] = {10, 20, 30};
        cout << arrMax<int, 5>(arr, 3) << endl; // Limit is 5
    }
      catch (const char* msg) {
        cout << msg << endl;
    }
    
    return 0;
}



/*
    Explanation of the Code
        1. Non-Type Parameter:
            The int limit is a non-type template parameter, which specifies the maximum allowable size for the array.
            This parameter is constant, meaning its value must be known at compile time.
        2. Function Logic:
            - The arrMax function takes:
                An array of type T.
                The size of the array (n).
            - If the size of the array exceeds the limit, the function throws an exception with the message "Array size exceeds limit!".
            - Otherwise, it calculates and returns the maximum value in the array.
        3. Compile-Time Evaluation:
            When calling the function:
                arrMax<int, 5>(arr, 3);
            The compiler replaces the placeholder T with int.
            The limit parameter is replaced by 5, making it possible to enforce the size check at runtime.
        4. Exception Handling:
        If the size of the array exceeds the limit, the program throws an exception, which is caught and displayed in the catch block.











*/


