#include<iostream>
using namespace std;

void transposeOfMatrix(int mat[][3], int n, int m) {
    int transpose[m][n];

    // transposing the matrix
    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // printing the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[2][3] = {
        {4,7,8},
        {8,8,7}
    };
    
    transposeOfMatrix(mat,2,3);
}