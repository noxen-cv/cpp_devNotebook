
/* DEMONSTRATION OF TIME COMPLEXITY 

    with an efficient solution
    
*/

#include <iostream> 

using namespace std;

int main() {
    int n; 
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> n; 

    for (int x=0; x <= n; x++) {
        sum = sum + x;
    };
    cout << "Sum of all numbers: " << sum << endl;


    // More Efficient way to calculate sum of numbers
    /* Time Complexity: O(n) Auxiliary Space: O(1) 
    Sum of First n natural numbers =  (n*(n+1)) / 2 */ 

    cout << "Efficient Solution: " << n * (n + 1) / 2 << endl;

    


    /* Time Complexity: 0(1) Auxiliary Space: 0(1)*/
    // n natural numbers that avoids overflow if result is going to be within limits.

    if (n % 2 == 0) {
        sum = (n/2) * 1LL * (n+1);
    }
    else {
        sum = ((n+1)/2) * 1LL * n;
    }

    cout << "Most Efficent and Overflow Safe Solution: " << sum << endl;

    return 0;
    
}