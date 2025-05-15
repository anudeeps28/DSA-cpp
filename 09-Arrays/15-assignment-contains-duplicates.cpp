#include<iostream>
using namespace std;

/**
 * @brief LeetCode Question:
 * https://leetcode.com/problems/contains-duplicate/description/
 */

// brute force solution (using arrays)
class Solution {
   public:
      bool containsDuplicate(int* array, int n) {
         for(int start=0; start<n; start++) {
            for(int end=start+1; end<n; end++) {
               if (array[start] == array[end]) {
                  return true;
               }
            }
         }
         return false;
      }
};

int main() {
   Solution s;
   int arr[] = {1,2,3,1};
   int n = sizeof(arr) / sizeof(int);
   cout << s.containsDuplicate(arr, n) << endl;
}