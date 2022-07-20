#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main() {

    int a = 10;
    int &r = a; // & used to give reference, * used for pointer.

    /*
    had we done:
        int *p // declaring pointer
        p = &a // assigning pointer
    the it would have been a pointer

    But since we did:
        &p = a // declaring and assigning a reference
    this is a reference
    */

    // when you are declaring a reference, you must also initialize it. Otherwise it will give an error
    // this means that a has been given an additional name r. We can either call it with a or r.

    cout << a << endl;
    
    int b = 25;
    r = b; // a will become 25. r cannot change, r will only remain a. So operation on r = operation on a

    r++;
    cout << r << endl; // r is now another name of a beacuse we have used it as a reference of a
    cout << a << endl; 

    // both r and a are same
    r = 45;
    cout << r << endl; 
    cout << a << endl; 
    
    
    // by concept, a reference does not take memory, it takes the same memroy as a
    // *however, a compiler may interpret it as differently.

}

