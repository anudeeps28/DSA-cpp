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
Concept: 
*/