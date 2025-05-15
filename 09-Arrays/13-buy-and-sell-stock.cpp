#include<iostream>
using namespace std;

/**
 * @brief LeetCode Question:
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

// O(n+n) = O(2n) = O(n)
void maxProfit(int *prices, int n) {
    int bestBuy[10000];
    bestBuy[0] = INT_MAX;
    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        maxProfit = max(maxProfit, (prices[i] - bestBuy[i]));
    }

    cout << "Max Profit = " << maxProfit;
}

int main() {
    int arr[6] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(int);

    maxProfit(arr, n);
}