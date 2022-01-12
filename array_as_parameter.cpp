#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void fun(int A[], int n){ //array is passed by address (cannot be passed by values at all); but n is passed as value
    int i;
    for (i=0; i<n; i++)
    printf("%d \n", A[i]);

    A[2] = 50;


}

int main(){
    int A[5] = {2,4,6,8,10};
    fun(A,5);
}

