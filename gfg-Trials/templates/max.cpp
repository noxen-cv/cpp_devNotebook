#include <iostream>
using namespace std;
 
template <typename T>
T max(T x, T y)
{
    return (x > y)? x : y;
}
int main()
{
    cout << ::max(3, 7) << endl;        
    cout << ::max(3.0, 7.0) << endl; // qualify your template function call with the global namespace operator, it will cause an error 
    // cout << ::max(3, 7.0) << std::endl;
    return 0;
}