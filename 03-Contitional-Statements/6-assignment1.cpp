/**
 * @file 6-assignment1.cpp
 * @author Anudeep
 * @brief Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
 * @version 0.1
 * @date 2025-03-25
 * 
 */

 #include<iostream>
 using namespace std;

 int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    if (number > 0) {
        cout << number << " is a positive number" << endl;
    } else if (number < 0){
        cout << number << " is a negative number" << endl;
    } else {
        cout << "The number is 0" << endl;
    }
    
    return 0;
 }