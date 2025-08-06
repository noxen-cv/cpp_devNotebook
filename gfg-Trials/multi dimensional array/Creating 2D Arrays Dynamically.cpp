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

    /* 
    Dynamic Allocation:
        Memory is allocated dynamically for both the row pointers and the rows themselves.
        This approach ensures flexibility in creating 2D arrays at runtime.
            Jagged Arrays:
          Using this technique, you can also create jagged arrays, where each row has a different number of columns.
            For example:
                for (int i = 0; i < m; i++)
                    arr[i] = new int[i + 1]; // Rows with increasing column sizes
             In this case, the first row will have 1 column, the second row 2 columns, and so on.
        Limitations:
            This approach is not cache-friendly because rows are stored in non-contiguous memory locations. As a result, accessing the elements may cause cache misses, slowing down performance.
*/
};

class arrayOfPointers {
    private:
    int** arr; 
    int rows, cols;

public:
    // Constructor allocates memory
    arrayOfPointers(int m, int n) : rows(m), cols(n) {

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
    int rows, cols;
    vector<vector<int>> arr;

public:
    arrayOfVectors(int m, int n) : rows(m), cols(n), arr(rows, vector<int>()) {}

    void fill(int value) {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                arr[i].push_back(value); // Push values into the vector
    }

    void print() const {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cout << arr[i][j] << " ";
        cout << endl;
    }
};

class vectorsOfVectors {
    private:
    int rows, cols;
    vector<vector<int>> arr;

    public:

    vectorsOfVectors(int n, int m) : rows(n), cols(m) {}

    void fill(int value) {
        for (int i = 0; i < rows; i++) {
            vector<int> rows;
            for(int j = 0; j < cols; j++){
                rows.push_back(value);
            }
            arr.push_back(rows);
        }
    }

    void print(){
        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

};

int main() {


    return 0;
}