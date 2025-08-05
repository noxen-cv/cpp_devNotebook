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
using namespace std;

class Dynamic2DArray {
private:
    int** arr;
    int rows, cols;

public:
    // Constructor
    Dynamic2DArray(int m, int n) : rows(m), cols(n) {
        arr = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new int[cols];
        }
    }

    // Destructor to free memory
    ~Dynamic2DArray() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    // Method to fill array with a specific value
    void fill(int value) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                arr[i][j] = value;
    }

    // Method to print array
    void print() const {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cout << arr[i][j] << " ";
        cout << endl;
    }
};


int main() {


    return 0;
}