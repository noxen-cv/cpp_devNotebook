#include <iostream>
#include <string.h>
using namespace std;

struct Test {
    char str[20];
};

int main() {
    struct Test st1, st2;
    strcpy(st1.str, "GeeksQuiz"); // st1.str = "GeeksQuiz"
    st2 = st1;                    // st2 gets a copy of st1 (deep copy of array)
    st1.str[0] = 'S';             // change first character of st1.str to 'S'
    cout << st2.str;              // print st2.str
    return 0;
}
