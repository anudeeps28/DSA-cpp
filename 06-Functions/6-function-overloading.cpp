#include<iostream>
using namespace std;
// function overloading = multiple functions with samen name but different parameters
int sum(int a, int b) {
    int result = a + b;
    return result;
}

double sum(double a, double b) {
    double result = a + b;
    return result;
}

int sum(int a, int b, int c) {
    int result = a + b + c;
    return result;
}

int main() {
    int s1 = sum(2,3);
    double s2 = sum(1.2,2.3);
    int s3 = sum(2,3,5);

    cout << s1 << endl << s2 << endl << s3 << endl;
}