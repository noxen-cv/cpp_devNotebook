#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void transpose(int arr[4][4]) {             // Fixed size parameter 4x4
    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            int temp = arr[i][j];           // using the manual swapping
            arr[i][j] = arr[j][i];          // or do the swap() from <algorithm>
            arr[j][i] = temp;
        }
    }
}

void swap(int mat[4][4]) {
        for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            swap(mat[i][j],mat[j][i]);      // using swap() from algorithm
        }
    }
}

int main(){

    int mat[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    transpose(mat);

    return 0;
}