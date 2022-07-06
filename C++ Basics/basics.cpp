#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,7,12,9}; // initizliaing the array
    
    int even = 0; // initializing the variable even
    int odd = 0;
    
    // sizeof gives the size of that variable (size in bytes)
    int length = sizeof(arr)/sizeof(arr[0]); //sizeof(arr[0]) = size of element at index 0
    
    /* the array has 5 int, and the size of 1 int is 4 bytes,
    so the size of arr is 20 bytes */

    for (int i = 0; i<length; i++){
        if (arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even Numbers: " << even << endl;
    cout << "Odd Numbers: " << odd;
    return 0;   
}   

    