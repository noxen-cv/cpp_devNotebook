#include<iostream>
using namespace std;

template <typename T> //Template Declaration
struct Pair{
    T x, y; //Member Variables
    Pair(T i, T j){x = i; y = j;}   // Constructor
    T getFirst(){return x;}       // member functions 
    T getSecond(){return y;}      // member functions    
};

int main()
{
    Pair <int> p1(10, 20);           // Create a pair of integers
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}