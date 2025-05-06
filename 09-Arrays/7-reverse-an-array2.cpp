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

    int start = 0, end = n-1;
    while(start < end) {
        // int temp = array[start];
        // array[start] = array[end];
        // array[end] = temp;
        swap(array[start],array[end]);
        start++;
        end--;
    }

    printArr(array, 5);
}