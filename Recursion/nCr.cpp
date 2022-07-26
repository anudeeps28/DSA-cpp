#include<iostream>
using namespace std;

int fact(int n) // factorial function = recursive
{
    if (n == 0) return 1;
    return fact(n-1) * n; 
}

int nCr(int n, int r) // nCr = not recursive
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;
}

// recursive nCr function (using pascal's triangle)
int NCR(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return NCR(n-1,r-1) + NCR(n-1, r);
    }
}

int main()
{
    int r;
    int q;
    r = nCr(5,2);
    q = NCR(5,2);
    cout << r << endl;
    cout << q << endl;
    return 0;
}
