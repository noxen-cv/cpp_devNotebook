#include <iostream>
#include <string>

using namespace std;

class Solution {

    public:

        int firstOccurence(string& txt, string& pat) {
            int n = txt.size();
            int m = pat.size();

            for (int i = 0; i <= n; i++) {
                bool found = true;

                for(int j = 0; j < m; j++) {
                    if (txt[i + j] != pat[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    return i;
                }
            }
            return -1;
        }
};


int main() {
    Solution sol;
    string txt;
    string pat;

    string& txtRef = txt;
    string& patRef = pat;

    cout << "Enter the text: ";
    getline(cin, txt);
    cout << "Enter the Pattern: ";
    getline(cin, pat);

    int result = sol.firstOccurence(txtRef,patRef);


    return 0;
}
