#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

// function to display all the elements of the array
void Display(struct Array arr)
{
    int i;
    cout << "Elements are:" << endl;
    for (i= 0; i < arr.length; i++)
        cout << arr.A[i]<< endl;
}

int main()
{   
    // this type of array is preferable because it is dynamic 
    struct Array arr;
    cout << "Enter the size of the array" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    // filling elements of the array
    int n,i;
    cout << "Enter how many numbers in array";
    cin >> n;

    // displaying all the members of the array
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];

    }
    arr.length = n;
    Display(arr);
    
    return 0;
}