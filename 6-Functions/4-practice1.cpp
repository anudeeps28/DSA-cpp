#include<iostream>
using namespace std;
/**
 * @brief product of 2 numbers
 * @return int 
*/

int product(int a, int b) {
    int p = a * b;
    return p;
}

int main() {
    cout << "product = " <<  product(2,4) << endl;
    return 0;
}