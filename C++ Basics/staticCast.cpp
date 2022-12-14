#include<iostream>

using namespace std;

int main() {
    float f = 3.5;
    int a = f;

    int b = static_cast<int>(f); 

    cout << a << endl;
    cout << a << endl;

    // static cast will not allow us to typecast an object
    // into another if it is illegal.
    // it only allows typecasting (converting) which is legal

// {
    int a1 = 10;
    int c = 'a';

    int* q = (int*)c;
    // int* p = static_cast<int*>(c);  // this will give error
// }

}

