#include<iostream>
using namespace std;

bool isPrime(int x) {
    bool isPrime = true;
    for(int i=2; i<x; i++) {
        if(x%i == 0) {
            isPrime = false;
        } else {;}
    }
    return isPrime;
}

void allPrime(int n) {
    for(int i=2; i<=n; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        } else {;}
    }
} 

int main() {
    allPrime(50);
    return 0;
}