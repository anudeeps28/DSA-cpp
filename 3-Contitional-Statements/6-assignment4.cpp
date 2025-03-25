/**
 * @file 6-assignment4.cpp
 * @author Anudeep
 * @brief
 * For any 3-digit number check whether it’s an Armstrong number or not.
 * Armstrong number is a number that is equal to the sum of cubes of its digits 
 * Eg: 371 is an armstrong numbe: 3*3*3+7*7*7+1*1*1=371
 * @version 0.1
 * @date 2025-03-25
 */
#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number you want to check: ";
    cin >> x;

    int num = x;

    int a = num%10;
    num = num/10;

    int b = num%10;
    num = num/10;

    int c = num%10;
    num = num/10;

    int numSum = a*a*a + b*b*b + c*c*c;
    if (numSum == x) {
        cout << "This is an Armstrong's Number" << endl;
    } else {
        cout << "This is NOT an Amrstrong's Number" << endl;
    }
    
}