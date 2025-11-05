#include <iostream>

using namespace std;

class User {
    public:
    string name;
    User() {
        cout << "Default" << endl;
    }
};

int main() {
    User usr();

    return 0;
}