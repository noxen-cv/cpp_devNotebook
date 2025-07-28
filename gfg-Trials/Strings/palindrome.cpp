#include <iostream>
#include <string>

using namespace std;


class Palindrome {

    public:

    bool isPalindrome(string& str) {
        int start = 0;
        int last = str.size() - 1;

        while ( start < last) {
            if (str[start] != str[last]) {
                return false;
            }
            start++;
            last--;
        }
        return true;
    }

};

int main() {
    string s;
    
    Palindrome p;

    cout << "Word Palindrome Checker" << endl;

    cout << "Enter a word: ";
    cin >> s;

    bool result = p.isPalindrome(s);

    if(result == true) {        // or just if(result) {
        cout << "Yes, It is a palindrome. " << endl;
    } else {
        cout << "No, It is not a palindrome. " << endl;
    }
    

    return 0;
}