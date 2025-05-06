#include<iostream>
using namespace std;

/**
 * @brief function to print if the number is odd or even
 * 
 * @return bool 
 */

bool isEven(int x) {
    if(x%2 == 0) {
       return true;
    } else {
        return false;
    }
}

int main() {
    cout << isEven(20);
}