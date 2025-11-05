// This is a template metaprogram that recursively computes a value at compile time.

#include <iostream>
using namespace std;

template<int n> 
struct funStruct {
    static const int val = 2 * funStruct<n - 1>::val;
};

template<> 
struct funStruct<0> {
    static const int val = 1;
};

int main() {
    cout << funStruct<10>::val << endl;
    return 0;
}


/* Visual Recursion Unfolded: 

funStruct<10>::val = 2 * funStruct<9>::val
funStruct<9>::val  = 2 * funStruct<8>::val
...
funStruct<1>::val  = 2 * funStruct<0>::val
funStruct<0>::val  = 1
 

funStruct<1>::val  = 2 * 1       = 2
funStruct<2>::val  = 2 * 2       = 4
funStruct<3>::val  = 2 * 4       = 8
funStruct<4>::val  = 2 * 8       = 16
funStruct<5>::val  = 2 * 16      = 32
funStruct<6>::val  = 2 * 32      = 64
funStruct<7>::val  = 2 * 64      = 128
funStruct<8>::val  = 2 * 128     = 256
funStruct<9>::val  = 2 * 256     = 512
funStruct<10>::val = 2 * 512     = 1024


*/
