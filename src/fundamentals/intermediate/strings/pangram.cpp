#include <iostream>
#include <string>
using namespace std;

bool isPangram(string s) {
    int n = s.length();
    if (n < 26) {
        return false; // A pangram must have at least 26 characters
    }

    bool visited[26] = {false}; // Track presence of letters

    // Traverse the string
    for (int i = 0; i < n; i++) {
        char x = s[i];
        
        // For lowercase letters
        if (x >= 'a' && x <= 'z') {
            visited[x - 'a'] = true;
        }
        
        // For uppercase letters
        else if (x >= 'A' && x <= 'Z') {
            visited[x - 'A'] = true;
        }
    }

    // Check if all letters are visited
    for (int i = 0; i < 26; i++) {
        if (!visited[i]) {
            return false; // If any letter is missing
        }
    }
    return true;
}

int main() {
    string test1 = "The quick brown fox jumps over the lazy dog";
    string test2 = "Hello World";

    cout << (isPangram(test1) ? "Pangram" : "Not a Pangram") << endl;
    cout << (isPangram(test2) ? "Pangram" : "Not a Pangram") << endl;

    return 0;
}