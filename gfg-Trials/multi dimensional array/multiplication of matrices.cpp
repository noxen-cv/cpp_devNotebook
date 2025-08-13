#include <iostream>
#include <vector>

using namespace std;

class matrices {
    private:
        int size;
        vector<vector<int>> res;
    
    public: 
        matrices(int& size) : size(size) {}

        void fill(vector<vector<int>>& mat) {
            for(int i = 0; i < size ; i++){
                for(int j = 0; j < size; j++){
                    int t;
                    cin >> t;
                    mat[i][j] = t;
                }
            }
        }

        void multiply(const vector<vector<int>>& mat1,const vector<vector<int>>& mat2) {
            res.resize(size,vector<int>(size,0));
            for(int i = 0; i < size ; i++){
                for(int j = 0; j < size; j++){
                    res[i][j] = 0;
                    for(int k = 0; k < size; k++){
                        res[i][j] = res[i][j] + (mat1[i][k] * mat2[k][j]);
                    }
                }
            }
        }

        void print() {
        for(int i = 0; i < size ;i++){
            for(int j = 0; j < size; j++){
              cout<< res[i][j] << " ";
            }
        cout << endl;
        }
    }

        // Bonus, checking if the resultant res[][] matrix is equal to the multiplication of both the matrices.
        bool multiplyMatrix(const vector<vector<int>>& mat1,const vector<vector<int>>& mat2) {
            // code here
            int temp[4][4] = {0};
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    for(int k = 0; k < 4; k++) {
                        temp[i][j] += mat1[i][k] * mat2[k][j];
                    }
                }
            }
            
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(temp[i][j]!= res[i][j]){
                        return false;
                    }
                }
            }
            
            return true;
        }
};

int main() 
{ 
    int n; 
    cin >> n;
    
    vector<vector<int>> matA(n, vector<int> (n, 0));
    vector<vector<int>> matB(n, vector<int> (n, 0));
    
    // Setting up sizes
    matrices mtr(n);


    // Filling out the matrices contents manually
    mtr.fill(matA);
    mtr.fill(matB);
    
    // Multiply Matrices
    mtr.multiply(matA, matB);
    
    // Print the result of the multipliation
    mtr.print();


   // Determine if both matrices match the resultant of res[i][j]
    bool result = mtr.multiplyMatrix(matA, matB);

    if(result = true) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

	return 0; 
}