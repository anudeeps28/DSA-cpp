#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m) {
    int startingRow = 0, startingCol = 0;
    int endingRow = n-1, endingCol = m-1; 

    while((startingRow <= endingRow) && (startingCol <= endingCol)) {
        // top
        for (int j = startingCol; j <= endingCol; j++) {
            cout << matrix[startingRow][j] << " ";
        }
        // right
        for (int i = startingRow+1; i <= endingRow; i++) {
            cout << matrix[i][endingCol] << " ";
        }
        // bottom
        for (int j = endingCol - 1; j >= startingCol; j--) {
            if(startingRow == endingRow) {
                // edge case for odd number of dimension
                break; // because this is already printed in "top" operation
            }
            cout << matrix[endingRow][j] << " ";
        }
        // left
        for (int i = endingRow - 1; i >= startingRow + 1; i--) {
            if(startingCol == endingCol) {
                // edge case for odd number of dimension
                break; // because this is already printed in "right" operation
            }
            cout << matrix[i][startingCol] << " ";
        }
        startingRow++;
        startingCol++;
        endingRow--;
        endingCol--;
    }
    cout << endl;
}

int main() {
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    spiralMatrix(matrix, 4, 4);

    cout << "-----------------------" << endl;

    int matrix2[3][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    spiralMatrix(matrix2, 3, 4);
    return 0;
    
}