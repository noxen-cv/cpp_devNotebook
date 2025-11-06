#include<iostream>
using namespace std;

class Player {
public:
    static int count; // Declaration of static data member

    Player() { count++; }  // Increment count when a player is created
    ~Player() { count--; } // Decrement count when a player is destroyed
};

int Player::count = 0; // Definition of static data member

int main() {
    Player p1;  // Creating the first player
    cout << Player::count << " "; // Accessing static member using class name
    
    Player p2;  // Creating the second player
    cout << Player::count << " "; // Accessing static member again
    
    return 0;
}