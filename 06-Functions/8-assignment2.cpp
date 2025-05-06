#include<iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum=0;
    while (number > 0) {
        int lastDig = number % 10;
        sum += lastDig;
        number = number / 10;
    }
    return sum;
}

int main () {
    cout << sumOfDigits(123) << endl;
}