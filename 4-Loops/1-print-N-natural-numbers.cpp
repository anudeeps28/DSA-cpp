#include<iostream>
using namespace std;

int main() {
    cout << "Till where do you want to print natural numbers: ";
    int N;
    cin >> N;

    for (int i=1; i<=N; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}