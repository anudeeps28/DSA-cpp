#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int add(int a, int b) { // Declaring the function; this is the header/prototype/signature; int a and int b are formal parameters. 
    
    // as the control comes to this function, the values of actual parameters are copied in formal parameters

    int c; // all that is inside the header is called the definition of function
    c = a+b;
    return c;
}

int main() { // this is the main function = starting point of a program

    int x,y,z;

    x = 10;
    y = 5;

    z = add(x,y); // Calling the function; x,y = actual parameters
    printf("sum is %d\n", z);
    cout<< "sum is" << z;
}


/* we are reducing the workload of the mani function and givig it to 
other different functions so that they help/assist main function
*/