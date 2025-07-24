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


    int sumOfArray(int* n, int x) {                 // Total Sum inside array indices
        int ans = 0;                                // Variable to store the sum of elements
        for (int i = 0; i < x; i++) {
            ans += n[i];                            // Add each element to ans
        }
        return ans;                                 // Return the final sum     
    }

    double averageOfArray(int* n, int x) {
        int sum = 0;
        for(int i = 0; i < x; ++i) {    
            sum += n[i];                        // Sum of all elements in the array
        }
        return (double)sum / x;                 // Return the average by double typecasting sum and dividing by size
    }
};

    int posAverage(int* n, int x) {             // Average of positive elements in the array
        int sum = 0;
        int count = 0;
        for(int i = 0; i < x; ++i) {
            if(n[i] > 0) {                      // Check if the element is positive
                sum += n[i];                    // Add to sum if positive
                count++;                        // Increment count of positive elements
            }
        }
        return (count == 0) ? 0 : sum / count;     // Return average or 0 if no positive elements
    }

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
