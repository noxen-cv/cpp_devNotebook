#include <iostream>

using namespace std;


// Function to find sum of diagonals
int diagonalSum(int arr[4][4]) {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i][i];           // main diagonal
        sum += arr[i][3 - i];       // secondary diagonal
    }
    
    // If matrix is of odd size (e.g., 3x3, 5x5), we subtract the middle element once
    // since it would be added twice (in both diagonals).
    // For 4x4, this isn't needed because center element is not shared.
    
    return sum;
}


int main() {
    int arr[4][4] = {{1, 2, 3, 4},
                    {2, 3, 4, 5},
                    {3, 4, 5, 6},
                    {4, 5, 6, 7}};


cout << diagonalSum(arr); // Output: 32

}