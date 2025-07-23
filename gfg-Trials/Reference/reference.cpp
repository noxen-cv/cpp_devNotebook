#include <iostream>
using namespace std;

void reverse_dig(int &a, int &b) {
    int ra = 0, rb = 0;
    int temp_a = a, temp_b = b;
    
    while (temp_a > 0) {
        ra = ra * 10 + temp_a % 10;
        temp_a /= 10;
    }

    while (temp_b > 0) {
        rb = rb * 10 + temp_b % 10;
        temp_b /= 10;
    }
    
    a = ra;
    b = rb;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1234, b = 67890;

    reverse_dig(a, b);
    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}
