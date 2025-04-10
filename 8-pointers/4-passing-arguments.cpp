/**
 * @brief passing by reference vs passing by value
 * @date 2025-04-10
 * 
 */

#include<iostream>
using namespace std;

// a separate copy of a is created and that value of stored in x
void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue: " << x << endl;
}

// pass by reference using reference variables
void passByReference(int &x) { // &x = a (i.e. x is an alias of a now = x and a refer to the same location in the memory)
    x = x + 10;
    cout << "Inside passByReference: " << x << endl;
}

// pass by reference using pointers
void passByPointer(int* x) {
    *x = *x + 10;
    cout << "Inside passByPointer: " << *x << endl;
}

int main() {
    int a = 5;

    cout << "Before passByValue: " << a << endl;
    passByValue(a);
    cout << "After passByValue: " << a << endl;

    cout << "Before passByReference: " << a << endl;
    passByReference(a);
    cout << "After passByReference: " << a << endl;

    cout << "Before passByPointer: " << a << endl;
    passByPointer(&a);
    cout << "After passByPointer: " << a << endl;

    return 0;
}