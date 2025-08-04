#include <iostream>
using namespace std;

struct area {
    int sd;
    int len, wid;
};

void find_area(int side, int le, int wd) {
    area obj;

    // assign value to side of square
    obj.sd = side;

    // assign values to length and breadth of rectangle
    obj.len = le;
    obj.wid = wd;

    // computing area of square
    int sq_area = obj.sd * obj.sd;

    // computing area of rectangle
    int rect_area = obj.len * obj.wid;

    // print both areas
    cout << sq_area << " " << rect_area << endl;
}

// assume this main for test
int main() {
    find_area(25, 40, 60);
    return 0;
}
