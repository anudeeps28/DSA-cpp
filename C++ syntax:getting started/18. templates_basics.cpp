#include<iostream>
using namespace std;
template<typename T> // you can also write class instead of typename
void Print(T value) // until called by the main function, this is not a real function. this actually gets created, when we call it and gets formed based on the type that it is called.
/*
this Print function is actually a template that gets created when we call the print
function from the main functiion. If we are not calling this Print function,
then there is nothing. It does not exist. It will not be executed in the program.
*/
{
    cout<<value<<endl;
}

int main() // contains different values data types
{
    Print(5);
    Print<int>(5); // same thing as previous line
    Print("hello");
    Print(5.5f);

    // all 3 data types are being compiled and executed without writing seperate functions for them
     
}