#include<iostream>
using namespace std;

int main() {
    // largest of 3 numbers
    int a,b,c;
    cout << "Enter the 3 numbers to compare";
    cin >> a >> b >> c;
    
    if (a > b && a > c) {
        cout << "largest number: " << a << endl;
    } else if (b > c) {
        cout << "largest number: " << b << endl;
    } else {
        cout << "largest number: " << c << endl;
    }
    return 0;
}