#include <iostream>
using namespace std;

// Function to count valid values of i
int countValues(int n) {
    int count = 0;
    for (int i = 0; i <= n; i++) {
        if ((n & i) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = countValues(n);
    cout << "Output: " << result << endl;

    return 0;
}

/* The condition n + i == n ^ i holds only when
 there is no carry in any bit position during addition
 — that is, when n & i == 0.

     In binary, XOR only sets a bit if one and only
     one of the bits is 1.
     + performs a carry if both bits are 1.
     So, if n and i do not share any '1' bits,

 This uses the bitwise AND n & i == 0 to 
 determine which values of i satisfy n + i == n ^ i, 
 and counts them.
*/
