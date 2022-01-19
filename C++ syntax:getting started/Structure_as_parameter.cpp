#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

//call by address
void changelength (struct Rectangle *p, int l) {
    p->length = l;
}

int main2(){
    struct Rectangle2 r ={10,5};
    changelength(&r, 20)
    {
        /* data */
    };
    
}

int area (struct Rectangle r1) { //seperate object created; call by value
    r1.length++; //call by value will not change the actual parameter
    return r1.length*r1.breadth;
}

int main (){
    struct Rectangle r ={10,5};
    printf("%d", area(r)); //we cna pass the entire structure as parameter, not need to pass individually
    
}

//in call by reference, the actual value gets modified.
//int area (struct Rectangle &r1){

//}

//array can only be sent by call by address, but this structure is having an array, so you can pass it..
void fun(Struct test t1){ //call by value, so t values copied in t1
    t1.A[0] = 10; //changing first value of t1 to 10 instead of 1
    t1.A[1] = 0; 
}
struct test
{
    int A[5];
    int n;
};

int main3(){
    struct test t = {1,2,3,4,5};
}


//call by value does not change the actual parameters, call by address does

//returning address of a structure

struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;

    p->length;
    p->breadth;

    return p;
}

int main(){
    struct Rectangle *ptr = fun();
}