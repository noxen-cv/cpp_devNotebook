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
    
    doublePointers(int** arr, int m, int n) : rows(m), cols(n), arr(arr) {}

    void

    


};

int main() {
    int m, n;
    int** arr = new int*[m];
    
    doublePointers dp(arr,m,n);
    return 0;
}