#include <iostream>
using namespace std;

int main() {
    // code here
    int n, val = 0, base = 1;
    cin >> n;

    while (n > 0 ){
        int lastDigit = n % 10;
        val += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    
    cout << val;

    return 0;
}




