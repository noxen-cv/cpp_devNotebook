/* DEMONSTRATION OF GEOMETRIC PROGRESSION

    Formula: T_n = A * R ^(n-1)

    Where: 
    T_n = Nth term to be calculated.
    A   = 1st Term
    R   = Common Ratio between consecutive terms   
    n   = nth Term to find

    Example:
    arr[2,4,8,16,32,64]
    A = 2
    r = 2 (2*2=4, 4*2=16...)
        If {
            n = 3
        }
    T_n = 8 [n,n,8,n,n....]

*/

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
    int A;  //1st term
    int r;  //Common Ratio
    int n;  //nth Term to find

    double ans;

    cout << "Get the First Term: ";
    cin >> A;

    cout << "Common Ratio: ";
    cin >> r;

    cout << "nth Term: ";
    cin >> n;

    ans = A * (int)(pow(r,n-1)); // pow() function returns a double result, (int) function converts float to int to avoid errors

    cout << "Arithmetic Progression: " << ans << endl;

    /* Future Enhancements
    > Seamless integration of other files
    > Efficient solution
        Non-conversion of float to int (not using pow())
        Using custom integer function -> long long intPow(long long base, int exp) 
    */

    return 0;



}