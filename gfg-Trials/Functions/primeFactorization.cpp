#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; // Return false if n is divisible by any number other than 1 and itself
        }
    }
    return true; // Return true if n has no divisors other than 1 and itself
}

// Function to perform prime factorization
void primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) { // Check if i is prime
            int x = i;
            while (n % x == 0) { // Check if n is divisible by x
                cout << i << " "; // Print the prime factor
                x = x * i; // Multiply x by i to handle repeated factors
            }
        }
    }
}

void printPrimeFactorization(int n) {
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number to be factorized
    primeFactors(n); // Call the prime factorization function
    cout << endl;
    printPrimeFactorization(n);
    return 0;
}