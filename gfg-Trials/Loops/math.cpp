#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class preMath {
public:
    void countDigits(int n) {
        int count = 0;
    
        while (n > 0) {
            n /= 10;
            count++;
        }
    
        cout << count;
    }
};

class math {
    public: 

    void printDivisors(int n) {
        // code here
        for(int i = 1; i <= n; i++){ 
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    void factorial(int n) {
        // code here
        int ans = 1;
        
            while (n > 0) {
                ans *= n;
                n--;
            }
        cout << ans << endl;
    }
    
    void gcd(int a, int b) {
    int x = min(a,b);
    int ans = 1;
    
        for (int i = 1; i <= x; i++) {
            if (a % i == 0 && b % i == 0) {
                ans = i;
            }
        }
    cout << ans << endl;
    }

    int gcdEuclid(int a, int b) {
        while (b != 0) {
            int temp = b; 
            b = a % b;
            a = temp;
        }
    return a;
    }

    void lcd(int a, int b) {
        if (a == 0 || b == 0) {
            cout << 0 << endl;
        }
        cout << (a * b) / gcdEuclid(a,b) << endl;
    }
   

    void primeNumber(int n) {  
        n++;
            while (true)
                {
                    int i;
                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                            break;
                    }
                    if (i == n)
                    {
                        cout << n << endl;
                        break;
                    }
                    n++;
                }
        }
};



int main() {
    preMath p;
    math m;

    
    int n, m, choice;
    cin >> choice;
    p.countDigits(12345);
    cout << endl;

    m.printDivisors(12);
    m.factorial(5);
    m.gcd(12, 15);
    cout << m.gcdEuclid(12, 15) << endl;
    m.lcd(12, 15);
    m.primeNumber(7);

    return 0;
}
