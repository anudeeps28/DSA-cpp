#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 3, c = 1;
    int result = c-- && ++b && a--;
    cout << a << b << c << endl;
    return 0;
}

/*
Q: what is the output of this program
A: 440
Concept: Short Circuiting; also the operations are operated
from left to right as written in code.

Had the value of c been 0, then the answer would have been
5,3,-1
*/