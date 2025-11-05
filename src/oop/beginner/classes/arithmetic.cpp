#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Addition {
    public:
    
    int add(int a, int b) {
        return a+b; 
    }
};

int main() {
    Addition add;
    int a,b;
    
    cin >> a >> b;

    add.add(a,b);
}