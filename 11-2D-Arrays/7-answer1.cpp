#include<iostream>
using namespace std;

void printSevens(int mat[][3], int n, int m) {
    int counter=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == 7) {
                counter++;
            } else {;}
        }
    }
    cout << counter << endl;
}

int main() {
    int mat[2][3] = {
        {4,7,8},
        {8,8,7}
    };
    printSevens(mat, 2,3);
}