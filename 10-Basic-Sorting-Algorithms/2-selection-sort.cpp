#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// O(n^2)
void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        // loop to find min idx
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}   

int main() {
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
}