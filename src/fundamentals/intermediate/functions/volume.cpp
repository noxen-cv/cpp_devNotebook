#include <iostream>
#include <cmath>

int volume(int s) {
    return s * s * s; // Volume of a cube
}

int volume(int length, int width, int height) {
    return length * width * height; // Volume of a cuboid
}

int main() {
    std::cout << "Volume of cube if each side is 3: " << volume(3) << std::endl;

    std::cout << "Volume of cuboid with dimensions 1, 4, 5: " << volume(1, 4, 5) << std::endl;
    return 0;
}