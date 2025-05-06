#include<iostream>
using namespace std;

char nextChar(char letter) {
    if (letter == 'z') {
        return 'a';
    } else {
        return letter+1;
    }
}

int main() {
    cout << nextChar('a') << endl;
}