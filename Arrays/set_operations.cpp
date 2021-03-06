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

// merge function
struct Array*  Merge(struct Array *arr1, struct Array *arr2) // return type is not int or void, but array pointer structure
{
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3 = new struct Array[];

    while (i < (*arr1).length && j < (*arr2).length)
    {
         if ((*arr1).A[i] < (*arr2).A[j])
            (*arr3).A[k++] = (*arr1).A[i++];
        else
            (*arr3).A[k++] = (*arr1).A[j++];
    }
     
    // merging and storing in array 3
    for (;i < (*arr1).length; i++)
        (*arr3).A[k++] = (*arr1).A[i];

    for (;j < (*arr2).length; j++)
        (*arr3).A[k++] = (*arr2).A[j];
        
    (*arr3).length = (*arr1).length + (*arr2).length;
    (*arr3).size = 10;

    return arr3;
}

// union function
struct Array*  Union(struct Array *arr1, struct Array *arr2) // return type is not int or void, but array pointer structure
{
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3 = new struct Array[];

    while (i < (*arr1).length && j < (*arr2).length)
    {
         if ((*arr1).A[i] < (*arr2).A[j])
            (*arr3).A[k++] = (*arr1).A[i++];
        else if((*arr2).A[j] < (*arr1).A[i])
            (*arr3).A[k++] = (*arr2).A[j++];
        else
        {
            (*arr3).A[k++] = (*arr1).A[i++];
            j++;
        }    
    }
     
    // merging and storing in array 3
    for (;i < (*arr1).length; i++)
        (*arr3).A[k++] = (*arr1).A[i];

    for (;j < (*arr2).length; j++)
        (*arr3).A[k++] = (*arr2).A[j];
        
    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

struct Array*  Intersection(struct Array *arr1, struct Array *arr2) // return type is not int or void, but array pointer structure
{
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3 = new struct Array[];

    while (i < (*arr1).length && j < (*arr2).length)
    {
         if ((*arr1).A[i] < (*arr2).A[j])
            i++;
        else if((*arr2).A[j] < (*arr1).A[i])
            j++;
        else if((*arr1).A[i] = (*arr2).A[j])
        {
            (*arr3).A[k++] = (*arr1).A[i++];
            j++;
        }    
    }
     
    
        
    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

struct Array*  Difference(struct Array *arr1, struct Array *arr2) // return type is not int or void, but array pointer structure
{
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3 = new struct Array[];

    while (i < (*arr1).length && j < (*arr2).length)
    {
         if ((*arr1).A[i] < (*arr2).A[j])
            (*arr3).A[k++] = (*arr1).A[i++];
        else if((*arr2).A[j] < (*arr1).A[i])
            j++;
        else
        {
            i++; 
            j++;
        }    
    }
     
    // merging and storing in array 3
    for (;i < (*arr1).length; i++)
        (*arr3).A[k++] = (*arr1).A[i];

    for (;j < (*arr2).length; j++)
        (*arr3).A[k++] = (*arr2).A[j];
        
    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    struct Array arr1 = {{2,6,10,15,25},10,5};
    struct Array arr2 = {{3,6,7,15,20}, 10,5}};
    struct Array *arr3;

    arr3 = Merge(&arr1,&arr2);
    arr3 = Union(&arr1,&arr2);
    arr3 = Intersection(&arr1,&arr2);

    Display(arr);
    
    return 0;
}