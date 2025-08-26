#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    sort(arr, arr + n);             // Syntax of sort: sort(first, last); and it automatically
}                                   // sorts either alphabetically, or lexicographically

template <typename T>       // Using <typename T> and <class T> is the same
void printArray(T arr[], int n) {
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";


        
    }
}

template <typename T>
void selection(T arr[], T n) {
    T arr[];
    for(int i = 0; i < n; i++) {

    }
}


int main() {
    int n;
    int arr[] = {1,2,3,4,5};
    size_t arr_Size = sizeof(arr) / sizeof(arr[0]);

    selection(arr, n);
    float x;

    sortArray(arr, n);

    printArray(arr, n);


    return 0;

}
