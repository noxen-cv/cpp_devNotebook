#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class math {
    public: 
    
    void greatestCommonDivisor(int a, int b) {
    int x = min(a,b);
    int ans = 1;
    
        for (int i = 1; i <= x; i++) {
            if (a % i == 0 && b % i == 0) {
                ans = i;
            }
        }
    cout << ans << endl;
    }
   
};
