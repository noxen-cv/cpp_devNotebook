#include <iostream>
#include <string>
#include <algorithm> // For sort and reverse
using namespace std;


class characterFinder {
    public:

        char findExtra(string s1, string s2) {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            int n = s1.length();
            for (int i = 0; i < n; i++) {
                if (s1[i] != s2[i]) {
                    return s2[i];
                }
            }
            return s2[n];
        }


        char findExtra(string s1, string s2) {
            int count[256] = {0};
            
            // Increment counts for all characters in s2
            for (char c : s2) {
                count[c]++;
            }
            
            // Decrement counts for all characters in s1
            for (char c : s1) {
                count[c]--;
            }
            
            // Find the character with count 1
            for (int i = 0; i < 256; i++) {
                if (count[i] == 1) {
                    return (char)i;
                }
            }
            return 0; // Should never reach here
        }

        char findExtra(string s1, string s2) {
            char res = 0;
            
            // XOR all characters in s1
            for (char c : s1) {
                res ^= c;
            }
            
            // XOR all characters in s2
            for (char c : s2) {
                res ^= c;
            }
            
            return res;
        }

};

int main() {
    characterFinder fndr;
    string s1 = "abcd";
    string s2 = "abecd";
    cout << "Extra character is: " << fndr.findExtra(s1, s2) << endl;
    return 0;
}