#include <iostream>

using namespace std;


class solution {
    public:

    int factorial (int n) {
        int ans = 1;
        for (int i = 1; i <= n; ++i){
            ans *= i;
        }
        return ans;
    }
};

int main() {
    solution sol;
    int num = 5;
    cout << "Factorial of " << num << " is " << sol.factorial(num) << endl;
    return 0;
}