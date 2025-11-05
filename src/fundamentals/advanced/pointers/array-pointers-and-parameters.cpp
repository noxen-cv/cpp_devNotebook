#include <iostream>
#include <iomanip>

using namespace std;

void normalLoops(int* n, int size) { // int *n or int n[] both work for arrays
    for(int i = 0; i < size; ++i) {
        cout << n[i] << " ";
    }
}



int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    // rangebased for loop
    for (int x: arr) {
        cout << x << " "; // Output each element in the array
    }

    return 0;
}