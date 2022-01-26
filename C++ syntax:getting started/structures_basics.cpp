#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Rectangle //defined outside the main function ; definition does not consume the main memory.
{
    int length;
    int breadth;
    char x; //it will allocate 4 bytes(as shown in sizeof), but will use only 1. 
}r1;



int main() {
    struct Rectangle r1={10,5}; //declaration of local variable  (inside the main function = this means that this will be accessable only inside the main function

    printf("%lu", sizeof(r1)); // error type while using %d = long unsigned
    cout << sizeof(r1) <<endl; //another way (endl works with this)

    //accessing members of the structure
    cout << r1.length << endl;
    cout << r1.breadth <<endl;

    //changing the values of members of the structure
    r1.length = 15;
    r1.breadth = 7;

    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}

//machines can access 4 bytes at a time. This adjustment is called Padding


//another way to declare variable
struct square 
{
    int length;
    int breadth;
}s1,s2; //global variables (because delcared outside the function)

