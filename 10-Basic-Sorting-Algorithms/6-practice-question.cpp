#include<iostream>
using namespace std;

// sort the character array in descending order using insertion sort

void printArray(char arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

void charSort(char arr[], int n) {
    for(int i=0; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while (prev >=0 && arr[prev] < curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }
}

int main() {
    char arr[6] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(arr) / sizeof(char);

    printArray(arr,n);
    charSort(arr,n);
    printArray(arr,n);

}