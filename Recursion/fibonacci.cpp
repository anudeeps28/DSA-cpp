#include <iostream>
using namespace std;

// using iterative function (using loops)
int fib (int n)
{
    int t0 = 0, t1 = 1, s, i;
    
    if (n <= 1) return n;

    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    
    return s;
}

// recursive function 
int rfib(int n){
    if (n <= 1) return n;
    return rfib(n-2) + rfib(n-1);
}

// recursive function using memoization
int F1[10]; // Global Array 
int mfib(int n)
{
    if (n <= 1) 
    {
        F1[n] = n; return n;
    }
    else
    {
        if (F1[n-2] == -1) F1[n-2] = mfib(n-2);
        if (F1[n-1] == -1) F1[n-1] = mfib(n-1);
        F1[n] = F1[n-2] + F1[n-1]; // changing the values of global array
        return F1[n-2] + F1[n-1]; 

    }
}

int main()
{
    int i;
    for (i = 0; i <10; i++)
    {
        F1[i] = -1;
    }

    int r;
    int q;
    int l;
    r = fib(5);
    q = rfib(5);
    l = mfib(5);
    cout << r << endl;
    cout << q << endl;
    cout << l << endl;

    
    return 0;
}