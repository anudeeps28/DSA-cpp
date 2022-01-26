#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Rectangle {

    int length;
    int breadth;
};

int main() {
    Rectangle r = {10,5}; //struct is not mandatory in C++ //
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p=&r;
    cout << p->length <<endl;
    cout << p->breadth<<endl;

    //creating structure in heap

    struct square
    {
        int side;
    };
    
    struct square *p2;
    p2 = new square;

    p2 ->side = 15;

    cout << p2->side <<endl;

}
