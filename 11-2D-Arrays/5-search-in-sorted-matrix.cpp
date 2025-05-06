#include<iostream>
using namespace std;

// O(n+m)
bool staricaseMethod(int mat[][4], int n, int m, int key) {
    int i=0, j=m-1;
    while (i<n && j < m) {
        if(mat[i][j] == key) {
            cout << "found at cell (" << i << "," << j << ")\n";
            return true;
        } else if (mat[i][j] > key) {
            // go left
            j--;
        } else {
            // go down
            i++;
        }
    }
    cout << "Key not found" << endl;
    return false;
}

int binarySearch(int arr[], int size, int key) {
    int start=0;
    int end=size-1;
    while(start<=end) {
        int mid = (start+end)/2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return -1;
}

bool binarySearchInMatix(int mat[][4], int n, int m, int key) {
    for(int i=0; i<n; i++) {
        int col = binarySearch(mat[i], m, key);
        if (col != -1) {
            cout << "found at cell (" << i << "," << col << ")\n";
            return true;
        } else {;}
    }
    return false;
}

// O(n^2)
bool bruteForceSearch(int mat[][4], int n, int m, int key) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == key) {
                cout << "found at cell (" << i << "," << j << ")\n";
                return true;
            } else {;}
        }
    }
    cout << "Key not found" << endl;
    return false;
} 

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    
    bruteForceSearch(matrix, 4, 4, 50);
    binarySearchInMatix(matrix, 4, 4, 50);
    staricaseMethod(matrix, 4, 4, 100);
}