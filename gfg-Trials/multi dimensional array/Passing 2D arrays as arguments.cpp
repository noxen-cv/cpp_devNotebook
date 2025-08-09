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
        arr = new int*[rows];               // Allocate an array of int pointers (rows on the heap)

        for(int i = 0; i < m; i++) {
            arr[i] = new int[rows];        // For each row, allocate an array of 'cols' integers on the heap
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

class vectorSTL { // C-Style Array of Vectors
    private:
    int rows, cols;
    vector<int>* arr; // Pointer to a C-style array of vectors, allocated on the heap

    public:
        vectorSTL(int m, int n) : rows(m), cols(n) {
            arr = new vector<int>[rows];        // Allocate an array of 'rows' vectors on the heap
        }                                       // Each arr[i] is an empty vector<int> at this point

        void fill() {
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    arr[i].push_back(i);         // For each vector arr[i], push 'i' 'cols' times
        } } }                                    // This fills row i with the value i, cols times

        void print() {
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    cout << arr[i][j] << " ";   // Print each element in vector arr[i]
                }
            cout << endl;                       // Newline after each row for readability
        } }

        ~vectorSTL() {  
            delete[] arr;               // Delete the array of vectors allocated with new[]
        }                               // Each vector cleans up its own internal memory automatically

        /**
         * Destructor needed since the use of C-Style Array of Vectors use new[] heap allocation
         * vector of Vectors don't... refer to the class for in-depth review
        */


};

class vectorVectors {
    private:
        int rows, cols;
        vector<vector<int>> arr;                            // 2D vector: vector of vectors, automatically manages memory

    public:
    
    vectorVectors(int m, int n) : rows(m), cols(n) {
        
        for(int i = 0; i < rows; i ++){
            vector<int> v;                                  // temporary vector to hold one row
                for(int j = 0; j < cols; j++) {
                    v.push_back(i);                         // another approach v.push_back(vector<int>(cols,i)); 
            }                                               // Creates a vector of length cols where every element is i.
        arr.push_back(v);
        }
        
    }

    /* vector of vectors STL libraries do not need destructors because it didn't use a new[] memory heap, and
    when program is out of scope, it automatically destroys */   

    void fill() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++){
                arr[i][j] = i + j;                          // Modify each element; example pattern
    }   }   }


    void print() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < arr[i].size(); j++) {        // Using arr[i].size() for more flexibility 
                cout << arr[i][j] << " ";                   // and will rely on the vector's actual size rather than a fixed column count.
            }
        cout << endl;                                       // Add newline for readability
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

    /* main function still in development */

    return 0;
}

