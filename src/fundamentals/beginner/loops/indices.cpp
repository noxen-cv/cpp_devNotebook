#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    void printEvenIndices(const string& s) {
        for (int i = 0; i < s.length(); i += 2) {
            cout << s[i];
        }
        cout << endl;
    }
};

int main() {
    Solution sol;

    string s1 = "Geeks";
    string s2 = "DoctorPhenomenal";

    cout << "Input: " << s1 << "\nOutput: ";
    sol.printEvenIndices(s1);  // Expected: Ges

    cout << "Input: " << s2 << "\nOutput: ";
    sol.printEvenIndices(s2);  // Expected: DcoPeoea

    return 0;
}
