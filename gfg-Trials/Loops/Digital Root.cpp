#include <iostream>
using namespace std;

// Function to find the digital root
int digitalRoot(int n) {
    if (n == 0)
        return 0;
    return 1 + (n - 1) % 9;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Output: " << digitalRoot(n) << endl;

    return 0;
}
