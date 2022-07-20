#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main() {
    int a = 10; //data variable
    int *p; // declaring address variable (pointer variable) -> also takes space in the memory
    p = &a;  //initialization/assignment (assigning address of a in p)

    cout << a << endl;
    printf("using pointer %d \n", *p); //dereferencing = print the value using pointer; \n inside the "" used to change line with printf
    printf("not using star %d \n", p); //it is printing the addres of a, not the data
    printf  ("same thing %d \n", &a); //same thing 

    // so for deferencing and delcaring, we use the star, but while assigning you simply use p


//accessing heap memory using pointer
    int *po; // whenever you declare any variable, it takes memory in stack
    po = (int *)malloc(5*sizeof(int)); //in C malloc used to allocate memory in heap; here we are allocating an array of 5 elements in heap memory
    po = new int[5]; //used to allocate memory in heap in C++

// pointer to an array
    int A[5] = {1,2,3,4,5}; // A is the memory location where 1 is present (first member of the array)
    int *pointer;
    pointer = A; // initialization of array (no need to use & here in the case of array)
    // but you need to give an address if you are assigning only an element of the array
    int *pointer3;
    pointer3 = &A[0];

    for (int i=0; i<5; i++) 
    cout << A[i] << endl; // accessing all elements 

    for (int i=0; i<5; i++)
    cout << pointer[i] << endl; // doing the same thing using a pointer (just the pointer will act as the name of the array)

// an array inside heap
    int *pointer2;
    pointer2 = new int[5]; // dynamically created a memory in heap

    pointer2[0] = 12; pointer2[1] = 14; pointer2[2] = 85; pointer2[3] = 64; pointer2[4] = 64;

    for (int i=0; i<5; i++)
    cout << pointer2[i] << endl; 

    free(pointer2); // deallocating heap memory in C
    delete [] pointer2; // deallocating heap memory in C++
    // in small projects it does not matter, but in larger projects, dealloctate the memory after finishing the project.


    // every pointer takes the same amount of memory

        struct Rectangle;

        {
            int length;
            int breadth;
        };
        
        int *p1;
        char *p2;
        float *p3;
        double *p4;
        struct Rectangle *p5;

        cout << sizeof(p1) <<endl;
        cout << sizeof(p2) <<endl;
        cout << sizeof(p3) <<endl;
        cout << sizeof(p4) <<endl;
        cout << sizeof(p5) <<endl;







}
 
