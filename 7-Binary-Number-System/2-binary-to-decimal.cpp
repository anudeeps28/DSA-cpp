#include<iostream>
using namespace std;

void binToDec(int binNum) {
    int n = binNum;
    int DecNum = 0;
    int pow = 1; // 2^0 2^1 2^2 ...

    while (n>0) {
        int rem = n%10;
        DecNum += rem*pow;
        pow *= 2;
        n = n/10;
    }
    cout << DecNum << endl;
}

int main() {
    binToDec(101);
}