#include<iostream>
using namespace std;

// normal variablkes
int fun (int n)
{
    if (n > 0)
    {
        return fun(n-1) + n;
    }

    return 0;
}

// using static variable
int fun2 (int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++; 
        return fun2(n-1) + x;
    }

    return 0;
}

int x = 0; // global variable
// using global variable = the result is same as while using static variable
int fun3 (int n)
{
    if (n > 0)
    {
        x++; 
        return fun3(n-1) + x;
    }

    return 0;
}
int main()
{
    int r,q,s;
    r = fun(5);
    q = fun2(5);
    s = fun3(5);
    cout << r <<endl;  
    cout << q <<endl;  
    cout << s <<endl;  

//calling again
    s = fun3(5);
    cout << s <<endl;  
 
}