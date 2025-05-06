#include<iostream>
using namespace std;

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    // in-build sort (O(n logn))
    sort(arr, arr+8); // starting index -> ending index

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}