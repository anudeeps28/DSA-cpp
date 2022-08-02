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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// inserting item in a sorted array
void InsertSort(struct Array *arr, int x)
{
    int i = (*arr).length - 1;
    if ((*arr).length == (*arr).size)
        return;
        
    while (i>=0 && (*arr).A[i] > x)
    {
        (*arr).A[i+1] = (*arr).A[i];
        i--;
    }

    (*arr).A[i+1] = x;
    (*arr).length++;
    
}

// checking if an array is sorted or not
int isSorted(struct Array arr)
{

    int i;
    for (i = 0; i < arr.length - 1;i++)
    {
        if (arr.A[i] > arr.A[i+1])
         return 0;
    }
    return 1;
}

// rearranging positives and negatives = for this we need to modify the array, so we call by value
void rearrange(struct Array *arr)
{
    int i = 0;
    int j = (*arr).length - 1;

    while (i < j)
    {
        while ((*arr).A[i] < 0) i++;
        while ((*arr).A[i] >= 0) j--;
    }   if (i<j) swap(&(*arr).A[i], &(*arr).A[j]);
}
int main()
{
    struct Array arr = {{2,3,5,10,15,-6},10,5};
    
    //InsertSort(&arr,20);
    //cout << isSorted(arr) << endl;
    rearrange(&arr);
    Display(arr);
    
    return 0;
}