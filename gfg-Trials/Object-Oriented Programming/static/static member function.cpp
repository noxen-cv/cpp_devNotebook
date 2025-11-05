#include<iostream>
using namespace std;

class Player {
private:
    static int count;

public:
    Player() { count++; }
    ~Player() { count--; }

    static int getCount() { return count; } // Static member function
};

int Player::count = 0;

int main() {
    Player p1, p2;
    cout << Player::getCount() << " "; // Accessing static function using class name

    return 0;
}