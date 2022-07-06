#include <iostream>
using namespace std;

// we write function here
void printFunction(){
    int i = 1;
    while (i <= 20)
    {
        cout << i << " ";
        i++;
    }
    
}
// the main function is the point of entry in the code
// this is just like the __name__ = "__main__" in .py

int main(){ 
    printFunction();
    return 0;
}