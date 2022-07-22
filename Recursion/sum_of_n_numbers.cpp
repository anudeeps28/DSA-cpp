#include<iostream>
using namespace std;

// recursive sum
int sum(int n)
{
    if (n==0)
        return 0;
    return sum(n-1)+n;
}

// iterative sum (using loop iteration)
int isum(int n)
{
    int s = 0;
    int i;
    for (i=1; i<=n; i++)
        s=s+i;
    return s;
}

int main()
{
    int r;
    int q;
    r = sum(5);
    q = isum(5);
    cout << r;
    cout << q;
    return 0;
}