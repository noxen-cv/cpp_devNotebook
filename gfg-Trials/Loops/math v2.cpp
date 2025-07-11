#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class mathv2 {
    private: 
    int a = 1, b = 1, c = 0;

    public:

        void fibonacci(int n) {
            
            cout << "1 1 ";
            for(int i = 2; i < n; i++) {
                    c = a + b;
                    cout << c << ' ';
                    a = b;
                    b = c;
            }
        }

        void fibonacciNth(int n) {
            int a = 1, b = 1, c = 0;
            if (n == 1 || n == 2) {
                cout << "1";
                return;
            } else {
                for(int i = 3; i < n; i++) {
                    c = a + b;
                    a = b;
                    b = c;
                }
              cout << c;
            }
        }

};

int main () {
    int n;

}