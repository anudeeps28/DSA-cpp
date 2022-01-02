#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main() {
    int a = 10; //data variable
    int *p; //address variable (pointer variable) -> also takes space in the memory
    p =& a;  //initialization/assignment
    printf("%d", a);
    printf("%d", *p); //dereferencing

    //accessing heap memory using pointer
    int *pointer; //whenever you declare any variable, it takes memory in stack
    pointer = (int *)malloc(5*sizeof(int)); //in C malloc used to allocate memory in heap; here we are allocating an array of 5 elements in heap memory
    pointer = new int[5]; //used to allocate memory in heap in C++


}

