#include<iostream>
using namespace std;

// recursive function
int fact(int n)
{
    if (n==0)
        return 1;
    return fact(n-1)*n;
}

// iterative function
int ifact(int n)
{
    int f = 1;
    int i;
    for (i=1; i<=n; i++)
    {
        f = f*i;
    }
    return f;
}

int main()
{
    int r;
    int q;  
    r = fact(5);
    q = ifact(5);
    cout << r << endl;
    cout << q << endl;
    return 0;
}