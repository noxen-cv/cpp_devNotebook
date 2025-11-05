#include <iostream>
#include <string>

using namespace std;

class PatternSearch {

    public:
    
    void naiveSearch(const string& text, const string& pattern) {
        int n = text.length();
        int m = pattern.length();

        for (int i = 0; i <= n - m; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    break;
                }
            }
            if (j == m) {
                cout << "Pattern found at index " << i << endl;
            }
        }
    }

    void printIndex(const string& s, const string& pat) {
        int found = s.find(pat);

        while(found != string::npos) {
            cout << "PatternFound at " << found << endl;
            found = s.find(pat, found + 1);
        }
    }

};



int main() {
    PatternSearch pattS;
    string text, pat;
    cin >> text >> pat; // Input text and pattern

    pattS.printIndex(text, pat); // Call the function to search for the pattern

    return 0;
}