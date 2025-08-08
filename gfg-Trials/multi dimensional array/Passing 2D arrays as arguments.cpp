/**
 * Creating 2D Arrays Dynamically
 *  1. Using Double Pointers
 *  2. Using Array of Pointers
 *  3. Using Array of Vectors
 *  4. Using Vector of Vectors
 * 
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

class doublePointers {
    private:
        int rows, cols;
        int **arr;

    public:
    
    doublePointers(int** arr, int m, int n) : rows(m), cols(n), arr(arr) {
        int** arr = new int*[rows];

        for(int i = 0; i < m; i++) {
            arr[i] = new int[m];        // Heap Allocation for every index
        }
    }
    ~doublePointers() {
        delete arr;
    }

    void fill(int size = 5) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; i < cols; j++){
                arr[i][j] = i + j;
    }   }   }


    void print() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; i++) {
                cout << arr[i][j] << " ";
            }
        }
    }
    


};

int main() {
    int m, n, size;

    int** arr = new int*[m];
    
    cout << "Enter Input Rows, then Cols: ";
    cin >> m >> n;

    doublePointers dp(arr,m,n); 

    cout << "Enter Size to Fill: ";
    cin >> size;

    dp.fill(size);

    dp.print();

    return 0;
}