#include<iostream>
using namespace std;

/**
 * Implicit typecasting order done by compiler to avoid data loss:
 * bool -> char -> int -> float -> double
 */

int main() {
    /**
     * IMPLICIT TYPECASTING (COMPILER DOES AUTOMTICALLY)
     */
    cout << (10/3) << endl; // 3
    cout << (10/3.0) << endl; // 3.333
    cout << ('A' + 0) << endl; // 3.333
    cout << ('a' + 0) << endl; // 3.333

    /**
     * EXPLICIT TYPECASTING (WE DO BY WRITING CODE)
     */
    cout << (int)('A') << endl;
    float PI = 3.14;
    cout << (int)(PI) << endl; // 3
    cout << ((float)10/3) << endl; // 3.33
    cout << (char)('A' + 1) << endl; // B

    /**
     * Assignment questions
     */
    cout << (bool)3 + 2 << endl;
    cout << 65.5 + 2 + 'A' << endl;

}