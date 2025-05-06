#include<iostream>
using namespace std;

int main() {
    int arr[5];
    cout << arr << "\n";
    int y = 25;
    // arr = &y; -> not allowed (array pointer is a constant, we cannot write different values to it)
    return 0;
}