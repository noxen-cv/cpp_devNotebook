# Arrays in C++




## Size of An Array

    - Use sizeof() to get the total size of an array
    - 

    Example:

### Calculating Total Size of an Array
                #include <iostream>
                using namespace std;

                int main() {
                    int arr[] = {10, 20, 30, 40, 50};

                    // Calculate and print the total size of the array
                    cout << sizeof(arr) << "\n"; // Output: 20

                    return 0;
                }
    Total Size = Number of Elements * Size of Each Element
    Total Size = 5 * 4 = 20 bytes

### Finding Number of Elements
                #include <iostream>
                using namespace std;

                int main() {
                    int arr[] = {10, 20, 30, 40, 50};

                    // Calculate the number of elements in the array
                    int n = sizeof(arr) / sizeof(arr[0]);
                    cout << n << "\n"; // Output: 5

                    return 0;
                }
        Total Size = 6 * 4 = 24 bytes

- The array arr has 6 elements, with only the first 2 explicitly initialized.
- The remaining 4 elements are automatically set to 0.
- Memory is allocated for all 6 elements

