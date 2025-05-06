#include<iostream>
using namespace std;

int main() {
    int n = 4;
    char letter = 'A';
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << letter++;
        }
        cout << endl;
    }
}