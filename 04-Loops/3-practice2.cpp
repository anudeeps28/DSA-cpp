/**
 * @file 3-practice2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-03-27
 */

#include<iostream>
using namespace std;

int main () {
    /**
     * Question 1: print the sum of digits of a number using a while loop
     */
    cout << "Enter the number: ";
    int number; cin >> number;
    int sum = 0;

    while (number != 0) {
        int x = number%10;
        sum += x;
        number = number/10;
    }
    cout << "The sum of the digits of the number is " << sum << endl;

    /**
     * Question 2: print the sum of odd digits of a number using a while loop
    */

    cout << "Enter the number2: ";
    int number2; cin >> number2;
    int sum2 = 0;

    while (number2 != 0) {
        int x = number2%10;
        if (x%2 != 0) {
            sum2 += x;
        }
        number2 = number2/10;
    }
    cout << "The sum of the digits of the number is " << sum2 << endl;

    /**
     * Question 3: print the digits of a give number in reverse using a while loop
     */
    cout << "Enter the number: ";
    int number3; cin >> number3;

    while (number3 != 0) {
        int x = number3%10;
        cout << x << " ";
        number3 /= 10;
    }
    cout << endl;

    /**
     * Question 4: reverse the number and print the result
     */
    cout << "Enter the number: ";
    int number4; cin >> number4;
    int finalNumber = 0;
    while (number4 != 0) {
        int x = number4%10;
        finalNumber = finalNumber*10 + x;
        number4 /= 10;
    }
    cout << finalNumber;
    cout << endl;

    return 0;
}