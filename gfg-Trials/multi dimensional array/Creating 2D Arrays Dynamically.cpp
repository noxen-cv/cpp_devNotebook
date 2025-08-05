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

class doublePointers {
private:
    int** arr;
    int rows, cols;

public:
    // Constructor
    doublePointers(int m, int n) : rows(m), cols(n) {
        arr = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new int[cols];
        }
    }

    // Destructor to free memory
    ~doublePointers() {
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

    // declare as friend function to access private variable
    friend class arrayOfPointers; 
    friend class arrayOfVectors; 
    friend class  vectorsOfVectors; 
};

class arrayOfPointers {
    private:
    int** arr; 
    int rows, cols;

public:
    // Constructor allocates memory
    arrayOfPointers(int m, int n) : rows(m), cols(n) {
        arr = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new int[cols];
        }
    }

    // Destructor frees memory
    ~arrayOfPointers() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    // Fill the array with a specific value
    void fill(int value) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                arr[i][j] = value;
    }

    // Print the array elements
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
};


class arrayOfVectors {


};

class vectorsOfVectors {

};

int main() {


    return 0;
}