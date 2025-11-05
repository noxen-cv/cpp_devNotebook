#include <iostream>
#include <string>

/* Logic in Reversing Algorithm

Flip the order of elements so the first becomes last, the second becomes second-last, and so on.

*/

class Reverse {

    public:
        std::string reverseString1(std::string& str) {
            std::string newString = "";

            int l = str.length() - 1; // getting the last index

            while(l >= 0) {
                newString = newString + str[l];
                l--; // decrementing the index
            }
            
            return newString;
            }

        std::string reverseString2(std::string& str) {
            int left = 0, right = str.length() - 1;

            while(left < right) {
                std::swap(str[left], str[right]);
                left++;
                right--;
            }
            return str;
        }
};

int main() {
    std::string str1; // "esreveR ni ++C snraeL naitsirhC"; // Original String
    std::cin >> str1;
    Reverse rev;

    std::string reversed1 = rev.reverseString1(str1);
    std::cout << "Reversed String 1: " << reversed1 << std::endl;

    
    std::string reversed2 = rev.reverseString2(str1);
    std::cout << "Reversed String 2: " << reversed2 << std::endl;

    
    return 0;
}

/* Efficient Use of Reverse String Functions is reverseString2
reverseString1 
    - newString = newString + str[l]; creates a new copy of the string in every iteration.
    - Each + operation copies and reallocates memory → total cost becomes O(n²) for long strings.
    - No matter how you reference or point to the string — if you use + in a loop, it still pays
      the price of repeated copying.


reverseString2
    std::swap(str[left], str[right]); swaps elements in place without extra copies, no new memory, just index-based swaps.
    Total cost is O(n) since each element is moved at most once.
    - More efficient for larger strings, especially when memory usage is a concern.

*/