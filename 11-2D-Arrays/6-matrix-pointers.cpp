#include<iostream>
using namespace std;

void func(int mat[4][4], int n, int m) {
    cout << "0th row pointer" << mat << endl;
    cout << "1st row pointer" << mat+1 << endl;
    cout << "2nd row pointer" << mat+2 << endl;

    cout << "0th row value" << *mat << endl;
    cout << "1st row value" << *(mat+1) << endl;
    cout << "2nd row value" << *(mat+2) << endl;

    // mat[i][j] = *(*(mat+i) + j)
    cout << *(*(mat + 2) + 2) << endl;
}

// same as func()
void func2(int(*mat)[4], int n, int m) {

}

int main() {
    int mat[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    cout << mat << " = " << &mat[0][0] << endl;
    cout << mat+1 << " != " << &mat[0][1] << endl;
    cout << mat << " = " << &mat[1][0] << endl;

    func(mat,4,4);

    
}