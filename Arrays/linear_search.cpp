#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are:" << endl;
    for (i= 0; i < arr.length; i++)
        cout << arr.A[i]<< endl;
}
// function written to swap (for improving linear search)
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length-1; i++) // this time no (*arr) because we are doing call by value, not by address
    {
        if (key == arr.A[i])
            return i;

        return -1;
    }
}

int ImprovedLinearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < (*arr).length-1; i++) // this time no (*arr) because we are doing call by value, not by address
    {
        if (key == (*arr).A[i])
            swap((*arr).A[i], (*arr).A[i-1]); // transposition (for making "move to front, just swap A[i] with A[0]")
            return i;

        return -1;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    cout << LinearSearch (arr,2) << endl << endl << "------------" << endl;
    cout << ImprovedLinearSearch (&arr,2) << endl << endl << "------------" << endl;
    Display(arr);
    
    return 0;
}