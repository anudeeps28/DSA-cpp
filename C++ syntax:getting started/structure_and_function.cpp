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

int perimeter (Rectangle r`){ //struct not necessary in C++
    return 2*(r.lenfth+r.breasth);

}

int main(){
    Rectangle = r={0,0};
    printf("Enter length and breadth");
    cin>r.length>r.breadth;

    int a = area(l1,b1);
    int peri = perimeter(l1,b1);


    printf("area = %d \n perimeter = %d", a, peri);

    return 0;

}