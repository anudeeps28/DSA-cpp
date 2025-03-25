#include<iostream>
using namespace std;

int main() {
    // income tax calculator
    int income;
    float tax;
    cout << "Enter your income (in $k): ";
    cin >> income;

    if (income < 30) {
         tax = 0;
    } else if (income > 40 && income <= 60) {
        tax = 0.2*income;
    }  else if (income < 100) {
        tax = 0.3*income;
    } else {
        tax = 0.35*income;
    }

    cout << "Tax in $ = " << tax*100 << endl;
    return 0;
}