#include <iostream>

using namespace std;

template <class T> 

class minElement {
    private:
        T y;

    public: 
        // Initialize Constructor
        minElement(T y) : y(y) {}

        void check(T x) {
            if (x < y) {
                cout << x << endl;
            } else {
                cout << y << endl;
            }
        }
};


int main() {
    int ans;
    cout << "Select the Following: \n";
    cout << "1. String 2. Int \n";
    cin >> ans;

    if (ans = 1) {
        string a, b;
        cout << "Select inputs for A and B.\n";
        cin >> a >> b;
        minElement<string> check(b);
    }
    else if (ans = 2) {
        int a, b;
        cout << "Select inputs for A and B.\n";
        cin >> a >> b;
        minElement<int> check(b);
    }
    else {
        cerr << "Inavlid answer\n";
        return 1;
    }

}