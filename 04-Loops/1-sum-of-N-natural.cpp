#include<iostream>
using namespace std;

int main() {
    cout << "Enter N: ";
    int N;
    cin >> N;
    int sum = 0;

    for (int i=1; i<=N; i++) {
        sum += i;
    }

    cout << "The sum of N numbers is: " << sum << endl;
}