#include<iostream>
using namespace std;

int main() {
    // print the largest of 2 numbers
    int a,b;
    cout << "enter the 2 numbers you want to compare:";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is the bigger number" << endl;
    } else if (a < b) {
        cout << b << " is the bigger number" << endl;
    }
    else {
        cout << "Both the numbers are same" << endl;
    }

    // determining if a number is odd or even
    int x;
    cout << "Enter your number";
    cin >> x;

    if (x%2 == 0) {
        cout << "the number is even";
    } else {
        cout << "the number is odd";
    }

    return 0;
}