#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    string substring(string &s, int L, int R) {
        string result = "";
        for(int i = L; i <= R; i++) {
            result += s[i];
        }
        return result;     // Extracts substring from index L to R (inclusive).
    }

    string sliceString(string &s) {
        return s.substr(1, s.size() - 2); // First and Last Characters are removed.
    }

    int countWord(string& s) {
        int count = 1;
        for(char c : s) {       // Using range-based for loop to count words for()
            if (c == ' ') {
                count++;
            }
        }
    return count; // returns number of words.
    }
};

int main() {
    string s;
    int L, R;

    cout << "Enter string: ";
    getline(cin, s); 

    cout << "Enter first and last index: ";
    cin >> L >> R;

    Solution sol;
    string res = sol.substring(s, L, R);

    cout << res << endl; 

    string sliced = sol.sliceString(s);

    cout << sliced << endl; 

    return 0;
}
