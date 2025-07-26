#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arr[] = {20, 40, 60, 80, 100};
    int* ptr = arr;

    ptr++;      // Move pointer to the second element
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    *ptr++;     // Move pointer to the next element then dereference it (Tricky)
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    ++*ptr;     // Increment the dereferenced value pointed to by ptr
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    ++*++ptr;   // Increment the dereferenced value pointed to by ptr after moving it to the next element (Very tricky)
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;

    return 0;

}

