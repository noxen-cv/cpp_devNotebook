#include <iostream>
#include <vector>
#include <string>

using namespace std;

class transpose {
    private:
        int size;
        vector<vector<int>> vec1;
        vector<vector<int>> ans;
        
        
        

    public:
    // Constructor Getters and Setters method
    transpose(const vector<vector<int>>& vec) : vec1(vec) {
        
    }    

    void setValue(int val) { 
        for(int i = 0; i < val; i++) {
            for(int j = 0; j < val; j++) {
                int val;
                cin >> val;
                vec1[i][j] = val;
            }
        }
    }

    void swap() {
    
    }

};

void print(string str) {
    cout << str << endl;
}

int main() {
    int size;       // Maintaining Square 2d array with same rows and cols
    int val;        // Value Index inside the Matrix;

    vector<vector<int>> vec(size, vector<int>(size, 0));       

    print("Set the Fixed Square Size: ");
    cin >> size;
    transpose tr(vec);
    tr.setValue(size);



    
}
