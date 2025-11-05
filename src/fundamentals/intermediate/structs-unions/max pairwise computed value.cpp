#include <iostream>
#include <vector>
using namespace std;

// Define the structure
struct Height {
    int feet;
    int inches;
};

class Solution {
  public:
    int findMax(vector<Height>& arr) {
        int maxHeight = 0;
        
        for (Height h : arr) {
            int totalInches = h.feet * 12 + h.inches;
            if (totalInches > maxHeight) {
                maxHeight = totalInches;
            }
        }
        
        return maxHeight;
    }
};

// Driver code to test the function
int main() {
    Solution sol;

    // Example 1
    vector<Height> heights1 = { {1, 2}, {2, 1} }; // 
    cout << "Max height (inches): " << sol.findMax(heights1) << endl; // Output: 25

    // Example 2
    vector<Height> heights2 = { {3, 2}, {2, 3}, {1, 2} };
    cout << "Max height (inches): " << sol.findMax(heights2) << endl; // Output: 38

    return 0;
}
