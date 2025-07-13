#include <iostream>


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
};

int main() {
    // code here
    int n, val = 0, base = 1;
    cin >> n;

    while (n > 0 ){
        int lastDigit = n % 10;
        val += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    
    cout << val;

    return 0;
}




