#include <iostream>
using namespace std;

void outlineSquare(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n ||j == 1 || j == n){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void Square(int n) {
        for(int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++){ 
                cout << "* ";
            }
    cout << endl;
    }
}

int main() {
    // code here
    int n;

    cout << "Enter the size of the square: ";
    cin >> n;

    
    cout << "Square Pattern:\n";
    Square(n);

    cout << endl;
    outlineSquare(n);
    
    return 0;
}