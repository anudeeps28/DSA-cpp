#include<iostream>
using namespace std;

// O(n)
int linearSearch(int *arr, int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {2,4,6,8,10,12,14,16};
    int key = 10;
    int n = sizeof(array) / sizeof(int);

    cout << linearSearch(array, n, key) << endl;
}