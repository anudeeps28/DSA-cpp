#include<iostream>
using namespace std;

void sayHello() {
    cout<< "Hello :)\n";
}

void assistant() {
    sayHello();
    cout << "sayHello called\n"; // function call
}

int main() {
    assistant(); // function call
    return 0;
}