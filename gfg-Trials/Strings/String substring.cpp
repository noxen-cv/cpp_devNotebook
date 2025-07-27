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
        return result;
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

    return 0;
}
