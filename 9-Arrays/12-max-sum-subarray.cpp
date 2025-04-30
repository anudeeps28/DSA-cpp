#include<iostream>
using namespace std;

// kadane's algorithm (O(n))
void maxSumSubarray3(int *array, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++) {
        currSum += array[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

// slightly optimized (O(n^2))
void maxSumSubarray2(int *array, int n) {
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++) {
        int currSum = 0;
        for(int end=start; end<n; end++) {
            currSum += array[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

// brute force (O(n^3))
void maxSumSubarray1(int *array, int n) {
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += array[i];
            }
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    maxSumSubarray1(arr, n);
    maxSumSubarray2(arr, n);
    maxSumSubarray3(arr, n);
}