#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void fun(int A[], int n){ //array is passed by address (cannot be passed by values at all); but n is passed as value | Also, you can use *A in place of A[].
    cout<<sizeof(A)/sizeof(int)<<endl; //this prints the size of a pointer because when we pass an array to a functin, it takes it as a pointer to an array
    for (int i=0;i<n;i++) //this is a for loop, not a for each | we cannot use for each because for each loop depends on size of an array
    cout<<A[i]<<endl;
    A[0] = 15; //this will change the value because the pointer will change the value 

}
int func (int size){ //this function is creating a new array. The benefit is array is created in heap and can be accessed by main memory
    int *p;
    p = new int [size]; //dynamically allocating memory

    for (j=0;j<size;j++)
    p[j] = j+1;

    return p;
}


int main(){
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<endl; //this prints the actual size of array; thus arrays always passed by address

    for (int x:A) //this is a for each loop
    cout << x<<" ";
    ////////////////////////////////

    int *ptr, sz = 7;

    ptr = func (sz);

    for (int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}

