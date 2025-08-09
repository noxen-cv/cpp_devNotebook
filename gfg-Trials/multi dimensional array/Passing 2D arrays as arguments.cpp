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
    
    doublePointers(int m, int n) : rows(m), cols(n) {
        arr = new int*[rows];               // Allocate ??

        for(int i = 0; i < m; i++) {
            arr[i] = new int[rows];        // Heap Allocation for every index
        }
    }
    ~doublePointers() {
        for(int i = 0; i < rows; i++) {
            delete[] arr[i];
            }
        delete[] arr;
        }
        

    void fill(int size = 5) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++){
                arr[i][j] = i + j;
    }   }   }


    void print() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
        }
    }   
};

class vectorSTL {
    private:
    int rows, cols;
    vector<int>* arr; // C-Style Array of Vectors

    public:
        vectorSTL(int m, int n) : rows(m), cols(n) {
            arr = new vector<int>[rows];        // Allocate Heap Memory with Array of Vectors
        }

        void fill() {
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    arr[i].push_back(i);        // Fill 
        } } }

        void print() {
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    cout << arr[i][j] << " ";
                }
            }
        }

        ~vectorSTL() {  
            delete[] arr;    // deleting arrays allocated with new[] 
        }

        /**
         * Destructor needed since the use of C-Style Array of Vectors use new[] heap allocation
         * vector of Vectors don't... refer to the class for in-depth review
        */


};

class vectorVectors {
    private:
        int rows, cols;
        vector<vector<int>> arr;

    public:
    
    vectorVectors(int m, int n) : rows(m), cols(n) {
        
        for(int i = 0; i < rows; i ++){
            vector<int> v;
                for(int j = 0; j < cols; j++) {
                    v.push_back(i); // another approach v.push_back(vector<int>(cols,i)); Creates a vector of length cols where every element is i.
            }
        arr.push_back(v);
        }
        
    }

    /* vector of vectors STL libraries do not need destructors as 
    when program is out of scope, it automatically destroys */   

    void fill(int size = 5) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++){
                arr[i][j] = i + j;
    }   }   }


    void print() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
        }
    }
    
};

int main() {
    int m, n, size;
    
    cout << "Enter Input Rows, then Cols: ";
    cin >> m >> n;

    doublePointers dp(m,n); 

    cout << "Enter Size to Fill: ";
    cin >> size;

    dp.fill(size);
    dp.print();

    return 0;
}

