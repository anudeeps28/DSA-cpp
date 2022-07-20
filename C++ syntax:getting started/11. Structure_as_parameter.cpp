#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
// structure that we will be operating
struct Rectangle
{
    int length;
    int breadth;
};

struct test
{
    int A[5];
    int n;
};

// ----------------------------------------------------------------------------

// call by value
int area (struct Rectangle r1) { //seperate object created; call by value
    cout<<r1.length<<endl; // dot operator used for accessing the members
    r1.length++; //call by value will not change the actual parameter
    cout<<r1.length<<endl;
    
}

// call by reference
int area2(struct Rectangle &r2)
{
    r2.length++;
    return r2.length*r2.breadth;
};

// ----------------------------------------------------------------------------

//call by address
int changelength (struct Rectangle *pointer) {
    (*pointer).length = 50;
    cout<<(*pointer).length;
}

// ----------------------------------------------------------------------------

//array can only be sent by call by address, but this structure is having an array, so you can pass it.
void fun(struct test t1){ //call by value, so t values copied in t1
    t1.A[0] = 10; //changing first value of t1 to 10 instead of 1
    t1.A[1] = 0; 
}

// ----------------------------------------------------------------------------

//returning address of a structure
struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle; // inside heap

    p->length;
    p->breadth;

    return p; 

}

// ----------------------------------------------------------------------------

// MAIN FUNCTION

int main (){
    struct Rectangle r ={10,5};
    struct test t = {1,2,3,4,5};
    printf("length %d \nBreadth %d \n", r.length, r.breadth);
    printf("%d", area(r)); //we can pass the entire structure as parameter, not need to pass individually
    printf("%d", area2(r));
    changelength(&r);

    struct Rectangle *ptr = fun();
    

}

// ----------------------------------------------------------------------------

//call by value does not change the actual parameters, call by address does

