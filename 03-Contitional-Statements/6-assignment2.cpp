/**
 * @file 6-assignment2.cpp
 * @author Anudeep Sharma
 * @brief Write a C++ program to print if it is a leap year or not
 * @version 0.1
 * @date 2025-03-25
 */

 #include<iostream>
 using namespace std;

 int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year%400 == 0) {
        cout << year << " is a leap year";
    } else if (year%100 == 0) {
        cout << year << " is not a leap year";
    } else if (year%4 == 0) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }
    return 0;
 }