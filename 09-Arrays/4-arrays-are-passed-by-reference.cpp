#include<iostream>
using namespace std;

void printArr(int arr[], int size) { // we need to give a separate argument "size" when passing arrays
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

// func and func2 are the exact same syntax (they do the exact same thing)
void func(int arr[]) {
    arr[0] = 1000;
}

void func2(int* ptr) {
    ptr[0] = 1001;
}

int main() {
    int a = 5;
    int* ptr = &a;
    cout << ptr << endl;
    
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout << arr << endl; // this gives the address of the first element of the array
    cout << *(arr) << endl; // arr[0]
    cout << *(arr+1) << endl; // arr[1]
    cout << *(arr+2) << endl; // arr[2]

    func(arr);  // arrays are always called by reference
    cout << arr[0] << endl; // 1000 because the changes are made in the original array (because arrays are passed by reference by default)

    func2(arr); // passing array name is equivallent to passing the pointer
    cout << arr[0] << endl;

    printArr(arr, n);
}