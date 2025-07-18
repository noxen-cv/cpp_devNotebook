#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 11 == 0)
        cout << "Eleven";
    else if (n % 3 == 0)
        cout << "Three";
    else if (n % 2 == 0)
        cout << "Two";
    else
        cout << "-1";

    return 0;
}
