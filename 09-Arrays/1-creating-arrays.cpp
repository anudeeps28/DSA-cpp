#include<iostream>
using namespace std;

int main() {
    int marks[50];
    cout << marks[0] << "\n";
    cout << marks[1] << "\n";
    cout << marks[2] << "\n";
    cout << marks[3] << "\n";

    int marks2[50] = {10,21};
    cout << marks2[0] << "\n";
    cout << marks2[1] << "\n";
    cout << marks2[2] << "\n";
    cout << marks2[3] << "\n";

    int marks3[] = {1,2};
    cout << marks3[0] << "\n";
    cout << marks3[1] << "\n";
    cout << marks3[2] << "\n"; // warning - out of array (garbage value)
    cout << marks3[3] << "\n"; // warning - out of array (garbage value)

    // size of array
    cout << sizeof(marks) / sizeof(int) << "\n";
    cout << sizeof(marks) << "\n"; // --> total bytes stored in this array
}