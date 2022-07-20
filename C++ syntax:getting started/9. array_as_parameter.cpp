#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// return type of this function = void; this is not going to return anything
void fun(int *A, int n){ //array is passed by address (cannot be passed by values at all); but n(size) is passed as value | Also, you can use *A in place of A[].
 // you can also write void fun(int A [], int n), but square brackets is old syntax and may not be supported by many compilers. * is supported.
    cout<<sizeof(A)/sizeof(int)<<endl; //this prints the size of A = size of a pointer because when we pass an array to a functin, it takes it as a pointer to an array
    for (int i=0;i<n;i++) //this is a for loop, not a for-each | we cannot use for each on a pointer (because for each loop depends on size of an array)
    cout<<A[i]<<endl;
    A[0] = 15; //this will change the value because the pointer will change the value 

}

int main(){
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<endl; //this prints the actual size of array; thus arrays always passed by address

    for (int x:A) //this is a for each loop (foreach loop is a loop that is used to iterate over elements)
    cout << x<<" ";
    
    return 0;
}

