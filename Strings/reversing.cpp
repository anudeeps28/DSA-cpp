#include<iostream>
using namespace std;


int main()
{
    // method 1
    char A[] = "python";
    char B[7], t;
    int i;

    for (i = 0; A[i] != '\0'; i++)
    {

    }
    i = i-1;

    int j;
    for (j = 0; i>= 0; i--, j++)
    {
        B[j] = A[i];
    }

    B[j] = '\0';

    cout << B;

    // method 2
    for (j = 0; A[j] != '\0'; j++)
    {

    }
    j = j-1;
    for (i = 0; i<j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    cout << A;
}