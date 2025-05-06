#include<iostream>
using namespace std;

// WAP to input a number and check whether the number is an Armstrong number or not
int main() {
    cout << "Enter the number: "; int number; cin >> number;
    int sum = 0;
    int num = number;
    while (num != 0) {
        int x = num % 10;
        sum += x*x*x;
        num /= 10;
    }

    if(sum == number) {
        cout << "This is an Armstrong number";
    } else {
        cout << "This is NOT an armstrong number";
    }

    
    return 0;
}