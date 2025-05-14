#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseBubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// time complexity = O(n^2)
void bubbleSort(int arr[], int n) {
    bool isSwap = false;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) { // we go till (n-i-1) because we don't want to repeat the loop for elements which are already in their position
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            // array is already sorted
            return;
        }
    }
}

int main() {
    int arr[5] = {5,4,1,3,2}; // O(n^2)
    int n = sizeof(arr) / sizeof(int);

    int arr2[10] = {1,2,3,4,5,6,7,8,9,10}; // O(1)
    int n2 = sizeof(arr2) / sizeof(int);

    printArray(arr, n);
    bubbleSort(arr,n);
    printArray(arr, n);
    reverseBubbleSort(arr,n);
    printArray(arr, n);
    bubbleSort(arr2,n2);
    printArray(arr2,n2);

}