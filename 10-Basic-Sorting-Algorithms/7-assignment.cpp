#include<iostream>
using namespace std;

// sort the array in descending order using all the 4 basic sorting algorithms

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseBubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void reverseSelectionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] > arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void reverseInsertionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int current = arr[i];
        int previousIndex = i-1;

        while(previousIndex>=0 && (arr[previousIndex] < current)) {
            swap(arr[previousIndex], arr[previousIndex+1]);
            previousIndex--;
        }
        arr[previousIndex+1] = current;
    }
}

void reverseCountSort(int arr[], int n) {
    int freq[100000] = {0}; 
    int minVal = INT_MAX, maxVal = INT_MIN;

    for(int i=0; i<n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }

    for(int i=maxVal, j=0; i>= minVal; i--) {
        while(freq[i] > 0) {
            arr[j++] = i; 
            freq[i]--;
        }
    }
}

int main() {
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(n);
    printArray(arr,n);
    reverseBubbleSort(arr,n);
    reverseSelectionSort(arr,n);
    reverseInsertionSort(arr,n);
    reverseCountSort(arr,n);
    printArray(arr,n);

}