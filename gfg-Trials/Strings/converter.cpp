#include <iostream>
#include <string>

using namespace std;

class converter {

    public:
        void binary_to_decimal(const string& s) { // Inefficient, uses copy of string, 
            int base = 1;
            int ans = 0;

            int size = s.length() - 1;

            for(int i = size; i >= 0; i--) {
                ans += (((int)s[i] - '0') * base);
                base *= 2; 
            }

        cout << ans;
        }

        void binaryToDecimal(const string& s) {
            int ans = 0;

            for(char c : s) {
                ans = (ans << 1) | (c - '0');
            }

        cout << ans;

        }

};

int main() {
    converter conv;
    string binary; // Binary String Input

    cout << "Enter Binary for Conversion: ";
    cin >> binary;

    cout << "The use of Binary Conversion with 2 types" << endl;
    cout << "Method 1: " << endl;
    conv.binary_to_decimal(binary); // Calls the first method

    cout << endl << "Method 2: " << endl;
    conv.binaryToDecimal(binary); // Calls the second method        

    return 0;
}