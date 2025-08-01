#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {10, 20};   
    Point *ptr = &p;      // Pointer to the struct

    cout << ptr->x << " ";  // Access members using the arrow operator
    ptr->x = 30;           
    cout << p.x;   

    // Array Structure 

    Point arr[5]; 

    // Initialize members of each struct in the array
    for (int i = 0; i < 5; i++) {
        arr[i].x = i;
        arr[i].y = i * 10;
    }

    // Print the members
    for (int i = 0; i < 5; i++) {
        cout << arr[i].x << " " << arr[i].y << endl;
    }

    return 0;
}