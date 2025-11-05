// GFG Example

#include<iostream>
using namespace std;

template <typename T>
T arrMax(T arr[], int n){
    T res = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > res)
            res = arr[i];
    }
    return res;
}

int main()
{
    int arr1[] = {10, 40, 3};
    cout << arrMax<int>(arr1, 3) << " ";
    
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax<float>(arr2, 4) << " ";
    return 0;
}   

/* 
Explanation

1. Template Definition:
        template <typename T> defines a generic data type T that will be used in the function.
        The function arrMax accepts an array of type T and an integer n (array size).
2. Logic:
        Initialize res with the first element of the array.
        Iterate through the array and update res if a larger element is found.
3. Function Calls:
        arrMax<int>:
            The compiler creates a version of arrMax specifically for int data type.
            The output for the input array {10, 40, 3} will be 40.
        arrMax<float>:
            The compiler creates a version of arrMax for float data type.
            The output for the input array {10.5, 3.5, 1.5, 30.5} will be 30.5.


*/