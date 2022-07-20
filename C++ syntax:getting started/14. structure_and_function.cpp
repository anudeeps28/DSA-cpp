// instead of a main long body, the program consists of a structure, functions and the main functions which calls all these.
// this is how it should be done! in C
// In C++, doing this is called Object Orientation

#include<iostream>
#include<stdio.h>

using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};


int area (struct Rectangle r){
    return r.length*r.breadth;

}

int perimeter (Rectangle r){ //struct not necessary in C++
    return 2*(r.length+r.breadth);

}

void initialise (Rectangle *r, int l, int b){
    (*r).length = l;
    (*r).breadth = b;
}

// The MAIN FUNCTION is not having any instructions of its own, but is only calling other functions
int main(){
    Rectangle r={0,0};

    
    int l,b;
    printf("Enter length and breadth");
    cin>>l>>b;

    initialise(&r, l,b);

    int a = area(r);
    int peri = perimeter(r);


    printf("area = %d \n perimeter = %d", a, peri);

    return 0;

}