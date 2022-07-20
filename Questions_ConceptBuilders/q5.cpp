#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int *p = a + 2;
    int **q = &p;
    ++*q;

    cout << (a+1)<< " " << *p << *(*q+1) << endl;
}

/*
a = points to the first member of the array
then p points to 3rd element (a+2, a being the first element) = this is pointer arithmetic
then address of p is assigned to a pointer to a pointer to an integer

*/
