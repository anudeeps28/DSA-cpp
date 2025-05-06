#include <iostream>
using namespace std;

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
   cout << maxProd;
}

int main() {
   int nums[] = {-2,0,-1};
   int n = sizeof(nums) / sizeof(nums[0]);
    
   maxProdSubArray(nums, n);
   return 0;
}