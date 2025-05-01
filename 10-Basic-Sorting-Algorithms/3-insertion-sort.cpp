#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// O(n^2)
void insertionSort(int arr[], int n) {
    // Loop through each element starting from index 0 to n-1
    for(int i=0; i<n; i++) {
        int curr = arr[i]; // Store the current element that needs to be placed correctly
        int prev = i-1;    // Start comparing from the previous element

        // Move elements of the sorted segment forward if they are greater than curr
        while (prev >=0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]); // Swap the previous element with the current to shift larger elements forward
            prev--; // Move to the next previous element for comparison
        }
    }
}

int main() {
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
}