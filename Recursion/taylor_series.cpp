#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1,f = 1;
    double r;
    if (n==0)
        return 1;
    else
    {
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

// using horners rule
double e2(int x, int n)
{
    static double s;
    if (n==0)
        return s;
    s = 1+x*s/n;
    return e2(x,n-1);
}

// using simple iterative method
double e3(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for (i = 1; i <n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;

    }
    return e2(x,n-1);
}

int main()
{
    cout << e(1,10);
    cout << e2(1,10);
    cout << e3(1,10);

}