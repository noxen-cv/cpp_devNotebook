#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Christian Valenzuela learns C++";

    // Traversing using indices O(n)
    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
    }
    cout << endl;

    // Traversing using range-based for loop O(n)
    for (char x : str) {
        cout << x;
    }
    cout << endl;

    // Traversing using iterators O(n)
    for (auto it = str.begin(); it != str.end(); ++it) {
        cout << *it;
    }
    cout << endl;

    return 0;
}

/*
Traversing strings in C++ can be done in several ways, each with its own use cases:

Readability-wise:
    Use range-based if you don't need the index.

    Use index-based if you need positions.

    Use iterators if you're writing generic STL code or need flexibility.

*/