#include<iostream>
using namespace std;

// O(log(m+n))
bool searchInSortedMatrix(int mat[3][4], int n, int m, int key) {
    int start = n;
    int end = n*m-1;
    while (start <= end) {
        int mid = start + (end-start)/2;
        int r = mid/m, c = mid%m; // converting 1-D index to 2-D index
        if (mat[r][c] == key) {
            return true;
        } else if (mat[r][c] < key) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return false;
}

int main() {
    int mat[3][4] = {
        {1,3,5,7},
        {10,11,16,10},
        {23,30,34,60}
    };

    cout << searchInSortedMatrix(mat,3,4,60) << endl;

}