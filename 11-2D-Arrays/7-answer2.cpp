#include<iostream>
using namespace std;

int printSumOf2ndRow(int mat[3][3], int n, int m) {
    int sum = 0;
    if (n<2) {
        cout << "matrix of size less than 2";
        return 0;
    } else {;}

    for(int i=0; i<n; i++) {
        if (i==1) {
            for(int j=0; j<m; j++) {
                sum += mat[i][j];
            }
        } else{;}
    }
    return sum;
}

int main() {
    int mat[][3] = {
        {1,4,9},
        {11,4,3},
        {2,2,3}
    };

    cout << printSumOf2ndRow(mat,3,3) << endl;

}