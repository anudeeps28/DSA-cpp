#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int age = 25;
    int marks = -200;
    char grade = 'A';
    bool isAdult = true;
    float cgpa = 9.6;
    double price = 9.43;

    float PI1 = 3.14159265359;
    double PI2 = 3.14159265359;

    cout << age << " " << marks << " " << grade << " " << isAdult << " " << cgpa << " " << price << endl;
    cout << "Size of int: " << sizeof(int) << endl;

    cout << setprecision(12) << PI1 << endl;
    cout << setprecision(12) << PI2 << endl;
}