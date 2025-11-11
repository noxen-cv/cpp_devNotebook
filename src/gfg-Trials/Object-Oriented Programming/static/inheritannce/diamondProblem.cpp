/* The Diamond Problem arises in multiple inheritance 
when a class inherits from two classes that both 
inherit from a common base class. 
This leads to ambiguity because the 
members of the common base class are inherited twice.*/

#include <iostream>

using namespace std;

class A {
    private: 
        
    public:
        int x;
        A() { x = 10; }
};

class B : virtual public A { };
class C : virtual public A { };

class D : public B, public C {};


int main() {
D obj;
cout << obj.x << endl;
return 0;

}