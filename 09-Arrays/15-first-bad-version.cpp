#include<iostream>
using namespace std;

bool isBadVersion(int version) {
    // the API calls which tells us if it is a bad version or a good one
}

// O(log n)
int firstBadVersion(int arr[], int n) {
    int left = 1, right = n-1;
    int firstBad = n;
    while (left <= right) {
        int mid = left + (right - left)/2;
        bool bad = isBadVersion(mid);
        if(bad == true) {
            firstBad = mid;
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    return firstBad;
    
}

int main() {
    int arr[] = {0,0,0,1,1,1,1,1,1,1,1};
    int n = sizeof(arr) / sizeof(int);

    int firstBadVersion(int arr[], int n);

}