/**
 * @file 3-practice.cpp
 * @author your name (you@domain.com)
 * @brief Practice Questions
 * @version 0.1
 * @date 2025-03-27
 * 
 */
#include<iostream>
using namespace std;

int main()
{
    /**
     * Question 1: Print the following pattern using for loop:
     *     * * * *
     *     * * * *
     *     * * * *
     *     * * * *
     */

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    /**
     * Question 2: Print the numbers from n to 1 using a for loop
     */

    cout << "enter n: ";
    int n;
    cin >> n;

    for (int i=n; i>0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}