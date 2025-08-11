#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void transpose(int arr[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main(){


}