#include<iostream>
using namespace std;

int main() {
    int i=0;
    while (i < 10) {
        if (i == 3) {
            break;
        }
        cout << i << endl;
        i++;
    }
    cout << "out of loop now" << endl;
    return 0;
}