#include<iostream>
using namespace std;

void rotateImage(int arr[3][3], int n, int m) {
    // transposing matrix
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // reversing the rows
    for (int i = 0; i < n; i++) {
        int left=0, right=m-1;
        while (left < right) {
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
    // printing matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6}, 
        {7,8,9}
    };

    rotateImage(arr,3,3);
}