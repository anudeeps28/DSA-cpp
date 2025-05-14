#include<iostream>
using namespace std;

void twoDArray(int arr[4], int n, int m) {
    int sizeOfArray = n*m;
    int mat[n][m];
    int k=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            mat[i][j] = arr[k];
            k++;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << mat[i][j] << " ";
        } 
        cout << endl;
    }
}

int main() {
    int arr[4] = {1,2,3,4};
    int n = 2; int m = 2;

    twoDArray(arr,2,2);
    
}