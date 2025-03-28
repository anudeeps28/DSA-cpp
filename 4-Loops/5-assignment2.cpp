#include<iostream>
using namespace std;

// WAP to print the multiplication table of a number, entered by the user
int main() {
    cout << "Enter the number: "; int number; cin >> number;
    int incrementor = 1;
    for (int i = incrementor; i <= 10; i++) {
        cout << number << "x" << i << "=" << number * i << endl;
    }
    cout << endl;
    return 0;
}