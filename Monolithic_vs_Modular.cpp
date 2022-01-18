#include<iostream>
#include<stdio.h>

using namespace std;

//monolithic
int main(){
    int length = 0; //we are assigning values inspite of asking them ahead in the function because it is a good practice to assign values right away
    int breadth = 0;

    printf("Enter the length and breadth");
    cin>>length>>breadth;

    int area = length*breadth;
    int peri = 2*(length + breadth);

    printf("Area = %d \n Perimeter = %d\n", area, peri);

    return 0;
}

//modular/procedural programming

int area (int l1, int b1){
    return l1*b1;

}

int perimeter (int l1, int b1){
    return 2*(l1+b1);

}

int main(){
    int l1 = 0, b1 = 0;
    printf("Enter length and breadth");
    cin>l1>b1;

    int a = area(l1,b1);
    int peri = perimeter(l1,b1);


    printf("area = %d \n perimeter = %d", a, peri);

    return 0;

}