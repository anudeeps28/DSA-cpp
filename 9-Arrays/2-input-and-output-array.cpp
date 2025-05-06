#include<iostream>
using namespace std;

int main() {
    // output values of an array
    int marks[25] = {7,5,2,1,3};
    int lengthOfArray = sizeof(marks) / sizeof(int);
    for(int i=0; i<lengthOfArray; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // taking input in an array
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int marks2[n]; 
    int lengthOfMarks2 = sizeof(marks2) / sizeof(int);
    for(int i=0; i<lengthOfMarks2; i++){
        cin >> marks2[i];
    }

    for(int i=0; i<lengthOfMarks2; i++) {
        cout << marks2[i] << ",";
    }
    cout << endl;
    return 0;
}