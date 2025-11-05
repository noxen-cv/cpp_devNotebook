#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; 
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // FINDING LAST DIGIT OF A NUMBER
    int LastDigit = abs(n%10); // Using absolute abs() to ensure positive output

    cout << "Last Digit: " << LastDigit << endl;

    // FINDING FIRST DIGIT OF A NUMBER

    int FirstDigit = abs(n);

    while (n >= 10) {
        FirstDigit/= 10;
    }

    cout << "First Digit: " << FirstDigit << endl;


    // CALCULATE THE SUM OF ALL DIGITS

    while (n > 0) {
        int digit = n % 10;
        sum += digit; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    };
    

    cout << "Sum of all Digits: " << sum << endl;

    return 0;

    /* Future Enhancements 
    > Refactor in OOP 
    */


}