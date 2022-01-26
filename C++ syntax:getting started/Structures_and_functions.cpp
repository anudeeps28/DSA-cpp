//write structures seperately
//main function is only used for calling other functions.


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize (struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;

};

int area (struct Rectangle r)
{
    return r.length*r.breadth;
};

void changelength(struct Rectangle *r, int l){
    r->length = l;
}

int main(){
    struct Rectangle r;
    
    initialize(&r, 10, 5);
    area(r);
    changelength(&r, 20);
    
}

//same code converted to C++ code; above one is a C program

class Rectangle
{
    int length;
    int breadth;


Rectangle ( int l, int b) //this is a constructor (this does the job of initialization; has the same name as class name)
{
    length = l;
    breadth = b;

};

int area ()
{
    return length*breadth;
};

void changelength( int l){
    length = l;
}

int main(){
    Rectangle r = {10,5}; //this is called an object instead of a variable
    
    r.area();
    r.changelength (20);
    
}
};
