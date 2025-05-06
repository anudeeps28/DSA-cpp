#include<iostream>
#include<cmath>
using namespace std;

// comment out the method which you don't want to run
int main() {
    // method1: brute force
    int x;
    bool isPrime = true;

    cout << "Enter the number you want to check: "; cin >> x;
    for (int i=2; i<(x-1); i++) {
        if (x%i == 0) {
            isPrime = false;
            break;
        } else {;}
    }
    if(isPrime) {
        cout << "PRIME NUMBER" << endl;
    } else {
        cout << "This is not a prime number" << endl;
    }

    // method2: optimized version
    int x2;
    cout << "Enter the number you want to check: "; cin >> x2;
    bool isPrime = true;

    for (int i=2; i<=sqrt(x2); i++) {
        if (x2%i == 0) {
            isPrime = false;
            break;
        } else {;}
    }
    if(isPrime) {
        cout << "PRIME NUMBER" << endl;
    } else {
        cout << "This is not a prime number" << endl;
    }
    return 0;
}