/* DEMONSTRATION OF ARITHMETRIC PROGRESSION

    Formula: T_n = A + (n-1) * D

    Where: 
    T_n = Nth term to be calculated.
    A   = 1st Term
    D   = Common Difference between consecutive terms   
    n   = nth Term to find

    Example:
    arr[1,5,9,13,17,21,25,29]
    A = 1
    D = 4 (1+4=5, 5+4=9...)
        If {
            n = 3
        }
    T_n = 9 [n,n,9,n,n....]

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int A;  // First Term
    int D;  // Common Difference of Terms
    int n;  // nth Term to find

    int ans;


    cout << "First Term: ";
    cin >> A;

    cout << "Common Difference: ";
    cin >> D;

    cout << "nth Term to Find: ";
    cin >> n;

    ans = A + (n-1) / D;

    cout << "T_" << n << ": " << ans << endl;

    return 0;


}