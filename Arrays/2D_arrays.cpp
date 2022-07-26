#include<iostream>
using namespace std;


int main()
{
    // method 1 (fully inside the stack)
    int A[3][4] = {{1,2,3,4}, {2,4,5,6}, {1,3,5,7}}; // this entire array is inside the stack

    // method 2 = array of pointers
    int *B[3]; //this array of pointers is created inside stack

    B[0] = new int[4]; // these arrays are created inside the heap
    B[1] = new int[4];
    B[2] = new int[4];

    // method 3 = double pointer (fully inside the heap)
    int **C; 
    C = new int*[3]; // array for columns in heap
    C[0] = new int[4]; // 1st row in heap
    C[1] = new int[4]; // 2nd row in heap
    C[2] = new int[4]; // 3rd row in heap

    int i,j;

    // printing Array A
    for (i = 0; i<3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    // printin array B
    for (i = 0; i<3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }

    // printing array C
    for (i = 0; i<3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}