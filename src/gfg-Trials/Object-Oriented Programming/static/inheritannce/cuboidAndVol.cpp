// A Cuboid and Volume

/* Create two classes a cuboid and a cuboid vol
The Cuboid class should have three data fields- length, width and height of int types. The class should have display() method, to print the length, width and height of the cuboid separated by space.

The CuboidVol class is derived from Cuboid class, i.e., it is the sub-class of Cuboid class. The class should have read_input() method, to read the values of length, width and height of the Cuboid. The CuboidVol class should also overload the display() method to print the volume of the Cuboid ( length * width * height ).
*/

#include <iostream>
#include <string>

using namespace std;

class Cuboid {
    protected:
        int length, width, height;
    // Add your code here.
    public:
    
    void display() {
        cout << length << " " << width << " " << height << endl;
    }
};

class CuboidVol : public Cuboid {
    // Add your code here.
    public:
    
    void read_input(int& length, int& width, int& height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    
    void display() {
        long long volume = 1LL * length * width * height;
        cout << volume << endl;
    }
};

