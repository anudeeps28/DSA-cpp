#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,2,9,12};
    int max = arr[0];
    int min = arr[0];
    int lengthOfArr = sizeof(arr) / sizeof(int);

    for(int i=0; i<lengthOfArr; i++) {
        if(arr[i] > max) {
            max = arr[i];
            cout << "assigning value " << arr[i] << " to max" << endl;
        }
        if(arr[i] < min) {
            min = arr[i];
            cout << "assigning value " << arr[i] << " to min" << endl;
        }
    }

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}