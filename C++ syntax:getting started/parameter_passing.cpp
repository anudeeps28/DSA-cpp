#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//passing/calling by value
void swap(int x, int y){
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
    printf("%d,%d",a,b); //we get the same value (parameters are not swapped because changes done in formal parameters does not reflect in actual parameters)
} //hance pass by value not suitable for swapping numbers; suitable for adding 



//call by address - changes done in formal parameters reflect in actual parameters
//call by address uses pointers
void swapp(int *x, int *y){ //only pointers can take addresses, so we write pointers
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int mainn(){
    int c,d;
    c =10;
    d=20;

    swapp(&c,&d); //instead of values, we write addresses
    printf("%d,%d",c,d);
} //one function can access the variables of another functions using pointers


//call by reference - allowed only by c++, not C
void swappp(int &x, int &y){  //in memory, swap is inside the main function.
    int temp;
    temp = x;
    x = y;
    y = temp;

}

int main(){
    int a,b;
    a =10;
    b=20;

    swappp(a,b);
    printf("%d,%d",a,b); 
} 


