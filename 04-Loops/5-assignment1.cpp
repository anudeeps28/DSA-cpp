#include<iostream>
using namespace std;

// WAP to find the Factorial of a number entered by the user
int main() {
    cout << "Enter the number: "; int n; cin >> n;
    int factorial = 1;
    for (int i = n; i >= 1; i--) {
        factorial *= i;
    } 

    cout << "Factorial of the number is: " << factorial << endl;
    return 0;
}