#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Rectangle {

    int length;
    int breadth;
};

int main() {
    Rectangle r = {10,5}; // struct is not mandatory in C++ //
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p=&r; // assigning pointer to the structure r 
    
    // output using pointer to a structure in c
    cout << p->length <<endl; 
    cout << p->breadth<<endl;

    // output using pointer to a structure in C++
    cout << (*p).length <<endl;
    cout << (*p).breadth<<endl;

    //creating structure in heap
    struct square
    {
        int side;
    };
    
    struct square *p2;
    p2 = new square; // creating variable/object of type "square" in heap

    p2 ->side = 15; // assigning in C
    (*p2).side = 15; // assigining in C++

    cout << p2->side <<endl; // printing in C
    cout << (*p2).side << endl; // printing in C++

}
