#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while(start < end) {
        if(s[start] != s[end]) {
            cout << "No" << endl;
            return 0; 
        }
        start++;
        end--;
    }

    cout << "Yes" << endl; // If the loop completes, the string is a palindrome.

    return 0;
}