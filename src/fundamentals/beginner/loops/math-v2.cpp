#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class mathv2 {
    private: 
    int a = 1, b = 1, c = 0;

    public:

        void fibonacci(int n) {
            if (n <= 0) {
                cout << "No terms to display.";
                return;
            }
            if (n == 1) {
                cout << "1";
                return;
            }
            cout << "1 1 ";
            a = 1; b = 1; c = 0;
            for(int i = 2; i < n; i++) {
                c = a + b;
                cout << c << ' ';
                a = b;
                b = c;
            }
        }

        void fibonacciNth(int n) {
            if (n <= 0) {
                cout << "No term.";
                return;
            }
            int a = 1, b = 1, c = 1;
            if (n == 1 || n == 2) {
                cout << "1";
                return;
            }
            for(int i = 3; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            cout << c;
        }

        void primeNum(int n) {
            if (n == 0 || n == 1) {
                cout << "Neither Prime nor Composite";
                return;
            }
            if (n < 0) {
                cout << "Negative numbers are not prime.";
                return;
            }
            bool isPrime = true;
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                cout << "Yes";
            else
                cout << "No";
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
    int n, m, choice;
    mathv2 obj;
    do {
        cout << "\n--- Math Menu ---\n";
        cout << "1. Fibonacci Sequence\n";
        cout << "2. Nth Fibonacci Term\n";
        cout << "3. Prime Check\n";
        cout << "4. Multiplication Table\n";
        cout << "5. Table Difference\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter the number of terms for Fibonacci series: ";
                cin >> n;
                if (n <= 0) {
                    cout << "Please enter a positive integer.\n";
                    break;
                }
                obj.fibonacci(n);
                cout << endl;
                break;
            case 2:
                cout << "Enter N to get the Nth Fibonacci term: ";
                cin >> n;
                if (n <= 0) {
                    cout << "Please enter a positive integer.\n";
                    break;
                }
                cout << "Nth Fibonacci term: ";
                obj.fibonacciNth(n);
                cout << endl;
                break;
            case 3:
                cout << "Enter a number to check if it is prime: ";
                cin >> n;
                if (n < 0) {
                    cout << "Please enter a non-negative integer.\n";
                    break;
                }
                obj.primeNum(n);
                cout << endl;
                break;
            case 4:
                cout << "Enter a number for multiplication table: ";
                cin >> n;
                obj.multable(n);
                break;
            case 5:
                cout << "Enter two numbers for table difference (n m): ";
                cin >> n >> m;
                obj.tableDiffernce(n, m);
                cout << endl;
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);
}
