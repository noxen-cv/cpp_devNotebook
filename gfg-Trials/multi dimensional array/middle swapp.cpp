#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to perform swap operation
    void middleSwap(int arr[4][4]) {
        // Swap 2nd and 3rd row (index 1 and 2)
        for (int col = 0; col < 4; col++) {
            swap(arr[1][col], arr[2][col]);
        }

        // Swap 2nd and 3rd column (index 1 and 2)
        for (int row = 0; row < 4; row++) {
            swap(arr[row][1], arr[row][2]);
        }
    }
};

// Utility function to print 4x4 matrix
void printMatrix(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example input
    int arr[4][4] = {
        {0, 1, 4, 4},
        {12, 5, 14, 12},
        {20, 20, 21, 20},
        {1, 6, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(arr);

    Solution obj;
    obj.middleSwap(arr);

    cout << "\nMatrix after middleSwap:\n";
    printMatrix(arr);

    return 0;
}



/* 
EXAMPLE OF MIDDLE SWAPPING

    void middleSwap(int arr[4][4]) {
        // Swap 2nd and 3rd row (index 1 and 2) using temp variable
        for (int col = 0; col < 4; col++) {
            int temp = arr[1][col];
            arr[1][col] = arr[2][col];
            arr[2][col] = temp;
        }

        // Swap 2nd and 3rd column (index 1 and 2) using temp variable
        for (int row = 0; row < 4; row++) {
            int temp = arr[row][1];
            arr[row][1] = arr[row][2];
            arr[row][2] = temp;
        }
    }
*/