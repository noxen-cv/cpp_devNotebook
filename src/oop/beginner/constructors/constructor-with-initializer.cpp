#include<iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // Default Constructor with Initializer List
    Point() : x(0), y(0) {}

    // Parameterized Constructor with Initializer List
    Point(int x1, int y1) : x(x1), y(y1) {}

    void print() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Point p1, p2(10, 20);
    p1.print(); // Output: 0 0
    p2.print(); // Output: 10 20
    return 0;
}