#include <iostream>
using namespace std;

/**
 * @brief LeetCode Question:
 * https://leetcode.com/problems/maximum-product-subarray/description/ 
 */

//  O(n)
void optimizedSoln(int arr[], int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    int maxProd = arr[0];
    int minProd = arr[0];
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            swap(maxProd, minProd);
        }
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        result = max(result, maxProd);
    }
    cout << result << endl;
}

void maxProdSubArray(int array[], int n) {
   int maxProd = INT_MIN;
   for (int start = 0; start < n; start++) {
      for (int end = start; end < n; end++) {
         int currProd = 1;
         for (int i = start; i <= end; i++) {
            currProd *= array[i];
         }
         maxProd = max(maxProd, currProd);
      }
   }
   cout << maxProd << endl;
}

int main() {
   int nums[] = {2,3,-2,4};
   int n = sizeof(nums) / sizeof(nums[0]);
    
   maxProdSubArray(nums, n);
   optimizedSoln(nums, n);
   return 0;
}