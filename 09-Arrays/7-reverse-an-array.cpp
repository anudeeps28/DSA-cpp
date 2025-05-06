#include<iostream>
using namespace std;

void printArr(int arr[], int size) { 
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int array[] = {5,4,3,9,2};
    int n = sizeof(array) / sizeof(int);

    int copyArr[n];
    for(int i=0; i<n; i++){
        copyArr[i] = array[n-i-1];
    }

    for(int i=0; i<n; i++) {
        array[i] = copyArr[i];
    }

    printArr(array, 5);

}