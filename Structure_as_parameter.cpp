#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area (struct Rectangle r1) { //seperate object created 
    r1.length++; //will not change the actual parameter
    return r1.length*r1.breadth;
}

int main (){
    struct Rectangle r ={10,5};
    printf("%d", area(r)); //we cna pass the entire structure as parameter, not need to pass individually
    
}