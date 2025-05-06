#include<iostream>
using namespace std;

int main() {
    do {
        cout << "Enter the number: "; int x; cin >> x;
        if (x%10 == 0) {
            continue;
        }
        cout << "You Entered: " << x << endl;
    } while (true);
    return 0;
}