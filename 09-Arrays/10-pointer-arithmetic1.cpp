#include<iostream>
using namespace std;

void printArray(int* p, int n) {
    for(int i=0; i<n; i++){
        cout << *p << endl;
        p = p+1;
    }
}

int main() {
    int a = 10;
    int* ptr = &a; // int pointer type

    cout << ptr << endl;
    // incrementing pointer moves up places equal to the length of the data type
    ptr++; // will move 4 places (increments 1 "int" places)
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;

    cout << (ptr+3) << endl; // (ptr + [3*int]) = 12 spaces

    int array[] = {1,2,3,4,5};
    int n = sizeof(array) / sizeof(int);

    printArray(array, n);

    int array2[] = {1,2,3,4,5};
    int* ptr1 = array2;
    int* ptr2 = ptr1 + 3;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    // ptr + ptr2 -> invalid operation in c++
    cout << ptr2 - ptr1 << endl; // gives how many spaces are available between those pointers

    // comparision of pointers
    cout << (ptr2 > ptr1) << endl; // yes (as memory allocation is contiguous)
    cout << (ptr1 == array2) << endl; 


}