#include <iostream> 
#include <iomanip>
#include <cmath>

class Solution{
    public:

    int calculate (int a, int b, int c, int d) {
        // 1st Formula: (a+b) / c * d;
        return (a + b) / c * d; 
    }
};


int main(){
    Solution sol;
    int a, b, c, d;

    std::cout << "Enter your Values: " << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "d: ";
    std::cin >> d;

    int result = sol.calculate(a,b,c,d);

    std::cout << "Result: " << result << std::endl;
    
    return 0;

}

    /* Future Enhancements
    > Seamless Connection with other files
    > Add different complex forumlas
    > use efficient solution with time complexity involve*/