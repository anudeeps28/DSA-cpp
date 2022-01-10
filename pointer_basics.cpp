    #include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main() {
    int a = 10; //data variable
    int *p; //address variable (pointer variable) -> also takes space in the memory
    p =& a;  //initialization/assignment (assigning address of a in p)
    cout << a << endl;
    printf("using pointer %d \n", *p); //dereferencing; \n inside the "" used to change line with printf
    printf("not using star %d \n", p); //it is printing the addres, not the data
    printf("same thing %d \n", p); //same thing


//accessing heap memory using pointer
    int *po; //whenever you declare any variable, it takes memory in stack
    po = (int *)malloc(5*sizeof(int)); //in C malloc used to allocate memory in heap; here we are allocating an array of 5 elements in heap memory
    po = new int[5]; //used to allocate memory in heap in C++

//pointer to an array
    int A[5] = {1,2,3,4,5};
    int *pointer;
    pointer = A; // initialization of array (no need to use * here)

    for (int i=0; i<5; i++)
    cout << A[i] << endl; //accessing all elements 

    for (int i=0; i<5; i++)
    cout << pointer[i] << endl; //doing the same thing using a pointer

//an array inside heap
    int *pointer2;
    pointer2 = new int[5]; //dynamically created a memory in heap

    pointer2[0] = 12; pointer2[1] = 14; pointer2[2] = 85; pointer2[3] = 64; pointer2[4] = 64;

    for (int i=0; i<5; i++)
    cout << pointer2[i] << endl; 

    free(pointer2); //deallocating heap memory
    //in small projects it does not matter, but in larger projects, dealloctate the memory if it is not being used

    //every pointer takes the same amount of memory

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
 
