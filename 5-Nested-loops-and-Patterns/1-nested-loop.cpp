#include<iostream>
using namespace std;
/**
 * 1 - outer loop: number of rows
 * 2 -  inner loop: number of columns (how many times/what is being printed in "each row")
 * 3 - code inside inner loop: what will each row be
 */
int main() {
    int n = 9; // you can change this to print different patterns
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}