#include<iostream>
using namespace std;

int main() {
    int x;
    do {
        cin >> x;
        if (x % 10 == 0){
            break;
        }
    } while (true);
    return 0;
}