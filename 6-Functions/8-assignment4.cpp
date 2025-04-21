#include<iostream>
using namespace std;

int greatestNumber(int a, int b , int c) {
    if (a>b && a>c) {
        return a;
    } else if (b>c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    cout << greatestNumber(1,2,3) << endl;
}