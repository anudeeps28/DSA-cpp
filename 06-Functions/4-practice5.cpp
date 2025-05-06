#include<iostream>
using namespace std;

/**
 * @brief factorial of a number
 * 
 * @param x 
 * @return int 
 */
int fact(int x) {
    int ans = 1;
    for(int i=2; i<=x; i++) {
        ans *= i;
    }
    return ans;
}

/**
 * @brief binomial cofficient for a given a and b
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int binomial(int a, int b) {
    int bin = fact(a)/(fact(b)*fact(a-b));
    return bin;
}

int main() {
    int answer = binomial(4,2);
    cout << answer << endl;
    return 0;
}