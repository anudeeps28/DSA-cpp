#include<iostream>
using namespace std;

int main() {
    float a;
    float b;
    float c;

    // input a
    cout << "Enter the value of a: " << endl;
    cin >> a;

    // input b
    cout << "Enter the value of b: " << endl;
    cin >> b;

    // input c
    cout << "Enter the value of c: " << endl;
    cin >> c;

    cout << "The average of a, b and c is: " << (a+b+c)/3 << endl; // int / int = int; float / int = float

}