#include<iostream>
using namespace std;

int sum(int a, int b=1) { // a, b are parameters
    int s = a + b;
    return s;
}

int diff(int a, int b) { // a, b are parameters
    int s = a - b;
    return s;
}

int main() {
    int s = sum(2,4); // 2, 4 are arguments
    int d = diff(2,4);
    int s1 = sum(2); // a = 2, b = default value 
    cout << "sum = " << s << endl;
    cout << "sum using default parameter b = " << s1 << endl;
    cout << "difference = " << d << endl;
}