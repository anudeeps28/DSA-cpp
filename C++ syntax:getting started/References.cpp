#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main() {

    int a = 10;
    int &r = a; //& used to give reference, * used for pointer.
    //this means that a has been given an additional name r. We can either call it with a or r.

cout << a << endl;
r++;
cout << r << endl; //r is now another name of a beacuse we have used it as a reference of a
cout << a << endl; 

//both r and a are same
r = 45;
cout << r << endl; 
cout << a << endl; 



}
