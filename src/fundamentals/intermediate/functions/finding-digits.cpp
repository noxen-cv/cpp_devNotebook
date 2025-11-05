#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int firstDigit(int n) { // Loop to find the first digit
    if (n < 0) n = -n; // Handle negative numbers
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int lastDigit(int n) { // Modulus operator to get last digit
    return n % 10;
}

void middleDigit(int n) {
    std::string numStr = std::to_string(std::abs(n)); // Convert number to string, bring absolute value to handle negative numbers
    int len = numStr.length(); // Count number of digits

    if (len % 2 == 1) { // Odd numer of Digits -> 1 middle digit
        std::cout << "Middle Digit: " << numStr[len / 2 ] << std::endl;
    }
    else { // Even number of Digits -> 2 middle digits
        std::cout << "Middle Digit: " << numStr[(len / 2) - 1] << " and " << numStr[len / 2] << std::endl;
    }
}


int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "First Digit: " << firstDigit(number) << std::endl;
    std::cout << "Last Digit: " << lastDigit(number) << std::endl;
    middleDigit(number);

    return 0;
}