#include<iostream>

using namespace std;

// writing a function that returns an array (dynamic array = array is created in heap)
int * func (int size){ //this function is creating a new array and return its pointer. The benefit is array is created in heap and can be accessed by main memory
    int *p;
    p = new int[size]; //dynamically allocating memory

    for (int i=0; i<size; i++){ // initializing the array
        p[i] = i+1;
    }

    return p; // returning the pointer of the array formed
}

int main(){
    int *ptr;
    cout << "Enter size of array: " << endl;
    int sz;
    cin >> sz;
     

    ptr = func (sz); // storing the "p" pointer address of the array formed in "ptr" pointer

    for (int i=0;i<sz;i++){
    
    cout<<ptr[i]<<endl; 
    
    }

    return 0;

    // hence inside the main function, there is no array. It is created by func function in the heap which forms the array and returns the pointer to that array
    // and main funciton uses that array. This is the benefit of dynamic memory. Array is created in heap, and it is created inside funciton func.
    // anything created in heap can be accesed if a pointer is available on it.
 