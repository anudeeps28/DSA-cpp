#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // pointer (variable which stores the address of another variable)

    float pi = 3.14;
    float* ptr2 = &pi;

    cout << &a << " = " << ptr << "\n";

    int** ptr3 = &ptr;
    cout << &ptr << " = " << ptr3;

    cout << sizeof(ptr) << "\n";
    cout << sizeof(ptr2) << "\n";

    // dereferencing pointers (gets the value of the variable pointed by the pointer)
    int x=10;
    int* p = &x;

    cout << p << "\n";
    cout << *p << "\n";

    // changing the value of a variable from a pointer
    *p = 20;
    cout << x << "\n";


}