#include <iostream>
#include <string>

using namespace std;

class binaryConversion {
    public:
        void  binaryDecimal(int n) {
            string binary = "";
            
                if (n == 0) {
                    cout << "0";
            }
                
                while( n>0) {
                    int rem = n % 2;
                    binary = to_string(rem) + binary;
                    n /= 2;
            }
            cout << binary;
        }
        
        void decimalBinary(int n) {
            int val = 0, base = 1;
            cin >> n;

                while (n > 0 ){
                    int lastDigit = n % 10;
                    val += lastDigit * base;
                    base *= 2;
                    n /= 10;
                }
                
            cout << val;
    }
};

int main() {
    // code here
    int n;
    binaryConversion bC;

    cin >> n;

    bC.binaryDecimal(n);
    cout << endl;


    return 0;
}




