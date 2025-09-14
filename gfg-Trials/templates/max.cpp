#include <iostream>
using namespace std;
 
template <typename T>
T max(T x, T y)
{
    return (x > y)? x : y;
}
int main()
{
    cout << ::max(3, 7) << endl;       // qualify your template function call with the global namespace operator ":: ",
    cout << ::max(3.0, 7.0) << endl;   // because max() already exists in the C++ Standard Librarym and it will cause an error as custom functions is not recognized
 // cout << ::max(3, 7.0) << std::endl;   Compiler Error Template type T cannot be deduced because the two arguments are of different types
    cout << ::max<double>(3,7.0) << endl; // alternate: use explicit type to make both arg with same type
    return 0;
}








