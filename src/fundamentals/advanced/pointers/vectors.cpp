// Contest of GFG
#include <iostream>
#include <vector>
using namespace std;

// Search in an Array
int search(vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) return i; // Found, return index
    }
    return -1; // Not found
}

// Have Fun with OR
vector<int> funWithNumber(vector<int>& arr) {
    vector<int> result(arr.size());
    for (int i = 0; i < arr.size() - 1; i++) {
        result[i] = arr[i] | arr[i + 1]; // bitwise OR with next element
    }
    result[arr.size() - 1] = arr[arr.size() - 1]; // last stays same
    return result;
}

// Product of Array Elements
int product(vector<int>& arr, int m) {
    long long prod = 1;
    for (int i = 0; i < arr.size(); i++) {
        prod = (prod * arr[i]) % m;
    }
    return prod % m;
}

int main() {
    cout << "Search in an Array" << endl;
    vector<int> arr = {1, 2, 3, 4};
    int x = 3;
    cout << "Index of " << x << ": " << search(arr, x) << endl;

    cout << endl;

    cout << "Have fun with OR" << endl;
    vector<int> ans = funWithNumber(arr);
    cout << "Result array: ";
    for (int num : ans) cout << num << " ";
    cout << endl;

    cout << "Product of Array Elements" << endl;
    int m = 100;
    cout << "Product modulo " << m << ": " << product(arr, m) << endl;
    return 0;
}
