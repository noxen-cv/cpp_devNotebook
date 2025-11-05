#include <iostream>
#include <string>

using namespace std;

class binaryDecimal {

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


class decimalBinary: public binaryDecimal {
    public: 
        void decimal_to_binary1(int n) {
            string result = "";
            while (n > 0) {
                result = to_string(n % 2) + result; // Prepend the binary digit
                n /= 2;
            }
            cout << result;
        }

        string decimal_to_binary2(int& n) {
            string result = "";

            while (n > 0) {
                int t = n % 2;                      // Calculate the remainder (0 or 1)
                result = result + to_string(t);     // Convert the remainder to string and append it
                n = n / 2;                          // Update the number by dividing it by 2
            }

            reverse(result.begin(), result.end()); // Reverse the string to get the correct binary representation
            return result;      
        }

        string decimal_to_binary3(int& n) {
            if (n == 0) return "0";

            string result;
            result.reserve(32); // Preallocate assuming a 32-bit integer

            while (n > 0) {
                result.push_back('0' + (n % 2)); // Append binary digit as char
                n /= 2;
            }

            reverse(result.begin(), result.end()); // Reverse to get correct order
            return result;
        }

        


};

int main() {
    binaryDecimal conv;
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


/* 
        FINDING EFFICIENCIES IN THE FUNCTIONS IN decimalBinary class:
        void decimal_to_binary1(int n) - Prepending (result = ... + result) is inefficient because:
                                        It causes O(n²) time in the worst case due to repeated shifting of characters in memory.

                                        Returns nothing, just prints. So it's less flexible.

                                        Simpler and works directly without reversing.
        string decimal_to_binary2(int& n) Appending is more efficient than prepending. The loop runs in O(log n), and appending is O(1) amortized per character.

                                        Reversal at the end is O(n), so overall this version is O(n), not O(n²).

                                        Returns a string, making it more reusable and testable.

        string decimal_to_binary3(int& n) push_back is faster than string concatenation.

                                        Avoids overhead of to_string.

                                        reserve(32) minimizes reallocations (32 bits max for int).

                                        Clean and readable.

        
        */