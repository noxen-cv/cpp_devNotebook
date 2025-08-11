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
    transpose(int size = 0) : size(size) {
        
    }    
    void setVal(int* size) { 
        this->size = *size;
        
    }

    void setValue(int val) {        
    }

    void swap() {
    
    }

};

void print(string str) {
    cout << str << endl;
}

int main() {
    transpose tr;
    int size;       // Maintaining Square 2d array with same rows and cols
    int val;        // Value Index inside the Matrix;

    vector<vector<int>> vec(size, vector<int>(size, 0));       

    print("Set the Fixed Square Size: ");
    cin >> size;
    tr.setVal(&size);



    
}
