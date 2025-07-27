#include <iostream>

using namespace std;

class Alphabet {

    public: 
    void alphabet(char c1, char c2) {
        for (char c = c1; c <= c2; c++) {
            cout << c << " ";
            }    
        }

    void asciiValues(int i1, int i2) {
        for (int i = i1; i <= i2; i++) {
            cout << i << " ";
        }
    }
};


int main( ) {
    Alphabet a;
    char c1, c2;
    int i1 = c1;
    int i2 = c2;


    do {
    cout << " Enter two characters: ";
    cin >> c1 >> c2;

    if (c1 > c2) {
        cerr << "Error: First character must be less than or equal to the second character." << endl; 
        continue; // Skip to the next iteration if the input is invalid, 
    }
    else {
        cout << "The Alphabet " << endl;
        a.alphabet(c1, c2);
        cout << endl;
        cout << "Their ASCII Values: " << endl;
        a.asciiValues(c1, c2);
        return 0;
    }
    cout << endl;

    } while (true);
    return 0;
}