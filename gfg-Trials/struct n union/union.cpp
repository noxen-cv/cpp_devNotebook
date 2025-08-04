#include<iostream>
using namespace std;

union Test1 {
    int x;
    float y;
};

union Test2 {
    int x;
    char bin[4];
};

int main() {
    Test1 t1;
    t1.y = 1.1f;
    cout << t1.x << '\n';  // Output: Binary representation of 1.1 as an int
    cout << sizeof(t1) << "\n";
    Test2 t2;
    t2.x = 1;
    cout << (int)t2.bin[0] << " " << (int)t2.bin[1] << " "
        << (int)t2.bin[2] << " " << (int)t2.bin[3]; 
    return 0;
}