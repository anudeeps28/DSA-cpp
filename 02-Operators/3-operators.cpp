#include<iostream>
using namespace std;

int main() {
    // Arithmetic operators
    int a = 3;
    int b = 5;
    cout << "+ " << (a+b) << endl; // 8
    cout << "- " << (a-b) << endl; // -2
    cout << "* " << (a*b) << endl; // 15
    cout << "/ " << (a/b) << endl; // 0
    cout << "% " << (a%b) << endl; // modulo (gives reminder)

    // Urinary operators
    int x = 3;
    x++; // x = x + 1
    cout << "x = " << x << endl;
    x--; // x = x - 1
    cout << "x = " << x << endl;

    // pre and post increment (works the same while decrementing)
    int w = 1;
    int q = w++; 
    int t = 1;
    int r = ++t;
    cout << "q = " << q << " " << "r = " << r << endl;

    // Assignment Operators
    int m = 10;

    m += 10;
    cout << m << endl;

    m -= 10;
    cout << m << endl;

    m *= 5;
    cout << m << endl;
    
    m /= 5;
    cout << m << endl;

    // Relational Operator --> (True/False)
    int j = 2;
    int k = 5;

    cout << (j > k) << endl;
    cout << (j < k) << endl;
    cout << (j >= k) << endl;
    cout << (j <= k) << endl;
    cout << (j == k) << endl;
    cout << (j != k) << endl;

    // Logical Operators
    cout << ((3<5) && (10>5)) << endl; // AND
    cout << ((3<5) && (10==5)) << endl; // AND
    cout << ((3<5) || (10==5)) << endl; // OR
    cout << !(3<5) << endl; // NOT

}