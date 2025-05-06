#include<iostream>
using namespace std;

// For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)
bool isPrime(int number){
    bool isPrime = true;
    for (int i = 2; i < number; i++) {
        if (number%i == 0) {
            isPrime = false;
            break;
        } else{;}
    }
    return isPrime;
}

int main() {
    cout << "Enter the number: "; int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        } else {;}
    }
    
}
