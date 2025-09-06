// Tricky Code Problem in C++ 

#include <iostream>
using namespace std;
 
template <typename T>       
void fun(const T&x)         
{
    static int count = 0;              // means each template instantiation has its own separate count.
    cout << "x = " << x << " count = " << count << endl;    
    ++count;
    return;                 // return; without a value is perfectly valid inside a function with return type void.
}                           // It’s optional at the end but sometimes used for clarity or early exit.


int main()
{
    fun<int> (1);           // creates an instance of fun where T = int.
    cout << endl;
    fun<int>(1);            
    cout << endl;   
    fun<double>(1.1);       // creates a separate instance of fun where T = double.
    cout << endl;
    return 0;
}