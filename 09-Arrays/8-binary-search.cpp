#include<iostream>
using namespace std;

// O(log n)
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    while(start <= end) {
        int mid = start + (end-start)/2; // for big values to prevent overflow, we cannot (start+end)/2
        if(arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int array[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(array) / sizeof(int);
    int key = 44;

    cout << binarySearch(array, n, key) << endl;
}