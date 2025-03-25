// ternary operator is a susscint way of writing if-else condition
#include<iostream>
using namespace std;

int main() {
    // 1. Is age greater than 18
    bool isAdult; // 1,0
    int age;
    cout << "Enter Age";
    cin >> age;

    /*if (age >=18) {
        isAdult = true;
    } else {
        isAdult = false;
    }*/
    isAdult = age >= 18 ? true: false;
    cout << isAdult << endl;

    // largest of 2 numbers
    int a = 2; int b = 5;
    int bigger = a > b ? a:b;
    cout << bigger;
    return 0;
}