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

        void primeNum(int n) {
                if(n == 0 || n == 1){
                    cout << "Neither Prime nor Composite";
                }
                
                int i = 2;
                while(i < n){
                    if(n % i == 0){
                        cout << "No";
                    }
                    i++;
                }
                cout << "Yes";
        }

        void multable(int n) {
            int m = 10;
            for (int i = 1; i<=m; i++){
                cout << n * i << "\n";
            }
        }

        void tableDiffernce(int n, int m){
             int limit = 10;
                for (int i = 1; i <= limit; i++){
                    cout << (n * i - m * i);
                        if (i != limit){
                                cout << " ";
                            }
                    }

                    
            }

};

int main () {
    int n;



    
}