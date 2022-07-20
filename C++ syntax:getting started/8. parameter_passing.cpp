#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// 1. passing/calling by value
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << endl;
}

// 2. call by address - changes done in formal para meters reflect in actual parameters
// call by address uses pointers
void swapp(int *x, int *y){ //only pointers can take addresses, so we write pointers
    int temp;
    temp = *x; // temp = value of a (because *x  = value of a; while x = address of a)
    *x = *y; // value of a = value of b
    *y = temp; // value of b = temp
}

// 3. call by reference - allowed only by c++, not C
// in memory, swap is inside the main function.
void swappp(int &x, int &y){  // we write & here because we have to make x, y reference of e,f respectively
    int temp; 
    temp = x;
    x = y;
    y = temp;

}


int main(){

    int a,b;
    a =10;
    b=20;

    swap(a,b);
    printf("%d,%d",a,b); // we get the same value (parameters are not swapped because changes done in formal parameters does not reflect in actual parameters)
    
    //hance pass by value not suitable for swapping numbers; suitable for adding 
    // or for doing operations where we need to return something

    /* ------------------------------------------------------------------------- */

    int c,d;
    c =10;
    d=20;

    swapp(&c,&d); //instead of values, we write addresses (because pointer points to an address, and then by writing *p we can access the value at that address location)
    printf("%d,%d",c,d);

    //one function can access the variables of another functions using pointers

    /* ------------------------------------------------------------------------- */

    int e,f;
    e =10;
    f=20;

    swappp(e,f); // we don't change anything here, because (for reference &r = a)
    printf("%d,%d",e,f); 

    /* ------------------------------------------------------------------------- */
} 


