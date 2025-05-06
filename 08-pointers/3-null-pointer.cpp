#include<iostream>
using namespace std;

int main() {
    int* ptr = NULL;
    cout << ptr << "\n";

    // cannot dereference null-ptr
    cout << *ptr << "\n"; // segmentation fault
    cout << "bye"; // will not be executed because segmentation fault quits the program
}