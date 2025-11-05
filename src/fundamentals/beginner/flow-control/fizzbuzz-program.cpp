#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; 

    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz\n";
        } else if (i % 5 == 0) {
            cout << "Buzz\n";
        } else {
            cout << "None\n";
        }
    }
    return 0;
}