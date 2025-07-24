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

bool check_If_Sorted (int* n, int x) {
    for(int i = 1; i < x; i++) {
        if(n[i] < n[i - 1])        // Check if current index(arr[i]) is less than previous array (arr[i - 1])
        return false;              // return false if satisfies
    }
    return true;
}

int count_distinct(int arr[], int n) {   // Counting how many Distinct Arrays are present
    int count = 0;                      // Counter for distinct elements

    for (int i = 0; i < n; i++) {
        bool isDistinct = true;         // Assume the current element is distinct

        // Check the elements to the left of the current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {     // If a duplicate is found
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            count++;                    // Increment the count for distinct elements
        }
    }

    return count;                        // Return the total count of distinct elements
}

int arrayMax(int* n, int size) {        // Function to find the maximum element in an array
    int max = n[0];                 // Initialize max with the first element of the array
    for(int i = 1; i < size; ++i) {
        if (n[i] > max) {           // If the current element is greater than the current max
            max = n[i];             // Update max to the current element
        }
    }
    return max;
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