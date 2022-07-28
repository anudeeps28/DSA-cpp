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

// getting the value at a particular index
int Get(struct Array arr, int index) // this function will return some value, so int. Also we don't need to change, so call by value
{
    if (index >= 0 && index<arr.length)
        return arr.A[index];
    return -1;
}

// setting the value at a particular index
void Set(struct Array *arr, int index, int x) // this will set a value, not return anything, so void. Also as we are changing values, this will be call by address
{
    if (index >= 0 && index < (*arr).length)
        (*arr).A[index] = x;
    
}

// finding max
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i =1; i<arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }   
    return max;

}

// finding min
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i =1; i<arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
            
}

// finding sum
int Sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    
    return s;
}

int Avg(struct Array arr)
{
    return (float) Sum(arr)/arr.length;
}
int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    //cout << Get(arr,9) << endl << "-----" << endl;
    //Set(&arr, 0 ,15);
    //cout << endl << "-----" << endl;
    cout << Max(arr) << endl << "-----" << endl;
    //cout << Min(arr) << endl << "-----" << endl;
    //cout << Sum(arr) << endl << "-----" << endl;
    //cout << Avg(arr) << endl << "-----" << endl;
    Display(arr);
    
    return 0;
}