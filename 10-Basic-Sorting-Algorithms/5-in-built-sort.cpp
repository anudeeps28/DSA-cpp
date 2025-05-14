#include<iostream>
using namespace std;

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    // in-built sort(O(n log n)) using Introsort, a hybrid sorting algorithm that combines:
    //   • Quicksort (for fast average-case performance)
    //   • Heapsort (to guarantee O(n log n) worst-case if recursion depth is too deep)
    //   • Insertion Sort (for small subarrays)
    sort(arr, arr+8); // starting index -> ending index
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // sorting in descending
    sort(arr, arr+8, greater<int>());
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}