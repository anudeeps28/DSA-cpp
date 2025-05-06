#include<iostream>
using namespace std;

int main() {
    int x=5, y=10;
    int* ptr = &x, *ptr2 = &y;
    ptr2 = ptr;
    cout << *(ptr) << "\n";

    cout << ptr << "\n";
    cout << ptr2 << "\n";
    cout << &x << "\n";
}