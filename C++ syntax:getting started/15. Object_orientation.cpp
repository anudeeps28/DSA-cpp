#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//because all the functions are working on a structure, include them all inside the structure. 
class Rectangle //class means all these members you have defined are private, this is the only difference, rest class is the same as structure

/* A structure and class are same in C++, only difference being: 
everything in public in structure, while in a class, everything is by default private*/

/* Writing a class = C++ style of programming; Writing functions = C - style of programming */
{
public:
    int length;
    int breadth;

void initialize ( int l, int b)
{
    length = l;
    breadth = b;

};

int area ()
{
    printf("%d",length*breadth);
    
};


};
int main(){
    Rectangle r; //also direct initialization we cannot do in class
    
    int l,b;
    printf("enter length and breadth");
    cin>>l>>b;

    r.initialize(l, b);
    int a = r.area();
    
}

//object = writing data and all the objects together, we can define a class and create an object
//withoug writing class, you cannot say it is an object oriented program.
