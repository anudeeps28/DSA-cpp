#include<iostream>
using namespace std;

// For a positive N, WAP that prints the first N Fibonacci numbers. (Assume N >= 2)
int main() {
    cout << "Enter the number: "; int n; cin >> n;
    int fib1 = 0;
    int fib2 = 1;
    cout << fib1 << endl << fib2 << endl;
    for (int i = 0; i < n; i++) {
        int x = fib1 + fib2;
        cout << x << endl;
        fib1 = fib2;
        fib2 = x;
    }
    return 0;
}