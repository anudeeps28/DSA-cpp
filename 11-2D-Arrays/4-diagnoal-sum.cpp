#include<iostream>
using namespace std;

// O(n)
void diagonalSumOptimized(int mat[][4], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum += mat[i][i]; // primary diagonal sum
        if (i != n-i-1) { // check for common element
            sum += mat[i][n-i-1]; // secondary diagnoal sum
        }
    }
    cout << sum << endl;
}

// O(n^2)
void diagonalSum(int mat[][4], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                sum += mat[i][j];
            } else if (j == n-i-1) {
                sum += mat[i][j];
            }
        }
    }
    cout << sum << endl;
}

int main () {
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    // diagonalSum(matrix, 4);
    diagonalSumOptimized(matrix,4);
}