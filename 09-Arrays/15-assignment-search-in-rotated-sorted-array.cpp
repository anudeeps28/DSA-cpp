#include<iostream>
using namespace std;

/**
 * @brief LeetCode Question:
 * https://leetcode.com/problems/search-in-rotated-sorted-array/description/
 */

int search(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        
        // Check if the left half [low..mid] is sorted
        if (nums[low] <= nums[mid]) {
            // If target falls within this sorted left half
            if (nums[low] <= target && target < nums[mid]) 
                high = mid - 1; 
            // Target in not in the left half
            else 
                low = mid + 1; 
        }
        // Otherwise, the right half [mid..high] is sorted
        else { 
            // If target falls within sorted right half
            if (nums[mid] < target && target <= nums[high]) 
                low = mid + 1; 
            // Target not in right half
            else 
                high = mid - 1; 
        }
    }
    return -1;
}

// O(n) 
int bruteForceSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums) / sizeof(int);

    cout << search(nums, n, 0) << "\n";  // prints 4
    cout << search(nums, n, 3) << "\n";  // prints -1
    cout << bruteForceSearch(nums, n, 0); // prints 4
    return 0;
}