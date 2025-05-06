#include<iostream>
using namespace std;

/**
 * @brief finding if a number is prime or not
 * 
 * @param x 
 * @return true 
 * @return false 
 */

bool isPrime(int x) {
    bool  isPrime = true;
    for(int i=2; i<x; i++) {
        if(x%i == 0) {
            isPrime = false;
        } else {;}
    }
    return isPrime;
}

int main() {
    bool result = isPrime(6);
    if(result) {
        cout << "this is a prime number";
    } else {
        cout << "this is NOT a prime number";
    }
}