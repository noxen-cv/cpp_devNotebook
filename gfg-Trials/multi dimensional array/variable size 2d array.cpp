#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2; 
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
the array initializer is not standard in C++. Standard C++ requires array dimensions to be compile-time constants, which  relies on compiler extensions — not standard C++.

So, although this compiles and runs on some compilers like GCC or Clang with extensions enabled, it is not portable or safe C++.

Proper C++ way (if using dynamic sizes);
int** arr = new int*[m];
for (int i = 0; i < m; ++i)
    arr[i] = new int[n];
// Don't forget to delete after use

*/