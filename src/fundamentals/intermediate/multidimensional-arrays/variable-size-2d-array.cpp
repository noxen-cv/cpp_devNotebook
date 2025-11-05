#include <iostream>
using namespace std;

int main()
{
    const int m = 3, n = 2; // const tells the compiler these values are fixed — now it can allocate the array at compile time.
    int arr[m][n];    // 2D array

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j; // Assigning values
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}


/* 
Standard C++ does not support Variable Length Arrays (VLAs).

the array initializer is not standard in C++. Standard C++ requires array dimensions to be compile-time constants, which  relies on compiler extensions — not standard C++.

Some compilers (like GCC in non-strict mode) allow it as an extension — but it's not portable and will fail on compilers like MSVC.
So, although this compiles and runs on some compilers like GCC or Clang with extensions enabled, it is not portable or safe C++.

Proper C++ way (if using dynamic sizes);
int** arr = new int*[m];
for (int i = 0; i < m; ++i)
    arr[i] = new int[n];
// Don't forget to delete after use

*/