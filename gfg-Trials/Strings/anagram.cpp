#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Anagram {
    public:

        // Function to check if two strings are anagrams using the sorting method
        bool areAnagramsSorting(string s1, string s2) {
            // If lengths are not equal, they cannot be anagrams
            if (s1.length() != s2.length()) {
                return false;
            }

            // Sort both strings
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            // Compare sorted strings
            for (int i = 0; i < s1.length(); i++) {
                if (s1[i] != s2[i]) {
                    return false;
                }
            }

            return true;
        }

        // Function to check if two strings are anagrams using the count array method
        bool areAnagramsCountArray(string s1, string s2) {
            // If lengths are not equal, they cannot be anagrams
            if (s1.length() != s2.length()) {
                return false;
            }

            // Initialize a count array of size 256 (for all ASCII characters)
            int count[256] = {0};

            // Increment counts for characters in s1
            for (int i = 0; i < s1.length(); i++) {
                count[s1[i]]++;
            }

            // Decrement counts for characters in s2
            for (int i = 0; i < s2.length(); i++) {
                count[s2[i]]--;
            }

            // If any count is non-zero, the strings are not anagrams
            for (int i = 0; i < 256; i++) {
                if (count[i] != 0) {
                    return false;
                }
            }

            return true;
        }
};

int main() {
    string s1, s2;
    Anagram angrm;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (angrm.areAnagramsSorting(s1, s2)) {
        cout << "Yes, the strings are anagrams." << endl;
    } else {
        cout << "No, the strings are not anagrams." << endl;
    }

    return 0;
}