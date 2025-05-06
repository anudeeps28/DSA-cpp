#include<iostream>
using namespace std;

int main() {
    // example 1: 2D Array
    // ---------------------------------
    int students[3][3] = { {100,100,100},
                            {85, 74, 89},
                            {63, 72, 75}}; 
    cout << students[1][1] << endl;
    cout << endl;
    // ---------------------------------

    // example 2: Taking input and output
    // ---------------------------------
    int arr[3][4];
    int n=3, m=4;
    // taking input
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // giving output
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}