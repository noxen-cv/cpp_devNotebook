#include <iostream>
using namespace std;

class Solution {
  public:

    int* decrementArrayElements(int arr[], int size) { // Uses pointers to modify the array
        for (int i = 0; i < size; i++) {
            arr[i]--;
        }
        return arr;
    }

    int* incrementArrayElements(int arr[], int size) { // Uses pointers to modify the array
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i] + 1; // Incrementing each element by 1
        }
        return arr;
    }
};

int main() {
    int arr[] = {54, 43, 2, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Solution sol;
    int* result = sol.decrementArrayElements(arr, size); // Uses pointer to receive modified array
    cout << "Array after decrementing elemets: ";
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    int* result = sol.incrementArrayElements(arr, size);

    cout << "Array after incrementing elements: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    operator delete[](result); // Free the memory allocated for the array

    return 0;
}
