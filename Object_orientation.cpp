#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//because all the functions are working on a structure, include them all inside the structure
class Rectangle //class means all these members you have defined are private, this is the only difference, rest class is the same as structure
{public:
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

void changelength(int l){
    length = l;
}
};
int main(){
    Rectangle r; //also direct initialization we cannot do in class
    
    int l,b;
    printf("enter length and breadth");
    cin>>l>>b;

    r.initialize(l, b);
    int a = r.area();
    //int le = r.changelength();
    
}

//object = writing data and all the objects together, we can define a class and create an object
