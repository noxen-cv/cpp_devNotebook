#include <iostream>
#include <iomanip>

using namespace std;

void normalLoops(int* n, int size) {
        for(int i = 0; i < size; ++i) {
        cout << n[i] << " ";
        }
}

void reverseTraversal(int* n, int size) {
    for(int i = size - 1; i >= 0; --i) {    // It has size -1, because of zero-based indexing... (out of bounds if only size)
        cout << n[i] << " ";
    }
}


int countNumIndices(int* n, int size, int selected) { // Count no. of specific indices present in the array
    int count = 0;
    for(int i = 0; i < size; i++){
        if (n[i] == selected) {
            count++;
        }
    }
    return count;
}

int searchIndexLocation(int* n, int size, int selected) { // Search for the index of a specific element in the array
    for(int i = 0; i < size; i++) {
        if(n[i] == selected) {
            return i;      // return index i, if found.
        }
    }
    return -1; // return -1 if not found
}


int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Using Normal Loops:\n";
    normalLoops(arr, arrSize);

    cout << "\nUsing Range Based Loops:\n";
    for(int x : arr) {              // Range-based for loop, cannot use pointer arithmetic
        cout << x << " ";
    }


    cout << "\nUsing Reverse Traversal:\n";
    reverseTraversal(arr, arrSize);


    return 0;
}