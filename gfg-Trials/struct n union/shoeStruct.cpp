#include <iostream>
using namespace std;

int main() {
    struct ShoeType {
        string style;
        double price;
    };

    ShoeType shoe1, shoe2;

    // Assign values to shoe1
    shoe1.style = "Adidas";
    shoe1.price = 9.99;

    // Print shoe1
    cout << shoe1.style << "$" << shoe1.price;

    // Copy shoe1 into shoe2 (structure assignment copies all members)
    shoe2 = shoe1;

    // Modify shoe2's price
    shoe2.price = shoe2.price / 9;

    // Print shoe2
    cout << shoe2.style << "$" << shoe2.price;

    return 0;
}
