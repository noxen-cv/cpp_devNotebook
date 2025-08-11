#include <iostream>
#include <vector>
#include <string>

using namespace std;

class transpose {
    private:
        int size;
        vector<vector<int>> vec1;
        vector<vector<int>> ans;        // ans declared, will initialize later using resize()
        
        
        

    public:
    // Constructor Getters and Setters method
    transpose(const vector<vector<int>>& vec, int& size) : vec1(vec), size(size) {
        
    }    

    void setValue() { 
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int val;
                cin >> val;
                vec1[i][j] = val;
            }
        }
    }

    void printVec() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                cout << vec1[i][j] << " ";
            }
        cout << endl;
        }   
    }

    void swap() {
        ans.resize(size, vector<int>(size, 0)); // use resize() operator for fill

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; i++) {
                ans[i][j] = vec1[i][j];
            }
            cout << endl;
        }
    }

};

void print(string str) {
    cout << str << endl;
}

int main() {
    int size;       // Maintaining Square 2d array with same rows and cols
    int val;        // Value Index inside the Matrix;

    vector<vector<int>> vec(size, vector<int>(size, 0));  // Syntax Breakdown: vector<vector<int>> name(rows, vector<int>(cols, init_value)); declare and initialized

    print("Set the Fixed Square Size: ");
    cin >> size;
    transpose tr(vec, size);
    tr.setValue();



    
}
