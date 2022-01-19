#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int add(int a, int b) { //this is the header/prototype; int a and int b are formal parameters
    int c; //all that is inside the header is called the definition of function
    c = a+b;
    return c;
}

int main() {

    int x,y,z;

    x = 10;
    y = 5;

    z = add(x,y); //x,y = actual parameters
    printf("sum is %d", z);
    cout<< "sum is" << z;
    

}