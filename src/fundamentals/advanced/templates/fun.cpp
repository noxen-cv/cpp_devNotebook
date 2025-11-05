// Tricky Code Problem in C++ 

#include <iostream>
using namespace std;
 
template <typename T>       
void fun(const T&x) {
    static int count = 0;              // means each template instantiation has its own separate count.
    cout << "x = " << x << " count = " << count << endl;    
    ++count;
    return;                 // return; without a value is perfectly valid inside a function with return type void.
}                           // It’s optional at the end but sometimes used for clarity or early exit.


template <class T>
class Test {
private:
    T val;
public:
    static int count;
    Test()  {   count++;   }
};
 
template<class T> 
int Test<T>::count = 0; // Static Member Initialization, count initialized to 0.

int main() {
    /* FUN template */
    fun<int> (1);           // creates an instance of fun where T = int.
    cout << endl;
    fun<int>(1);            
    cout << endl;   
    fun<double>(1.1);       // creates a separate instance of fun where T = double.
    cout << endl;

    /* test template */
    Test<int> a;
    Test<int> b;
    Test<double> c;

    cout << Test<int>::count << endl;
    cout << Test<double>::count << endl;

    return 0;
}