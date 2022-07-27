#include<iostream>
using namespace std;

// non-refined solution (first attempt)
int power(int m, int n)
{
    if (n==0)
        return 1;

    return power(m,n-1) * m;

}

// better solution
int power2(int m, int n)
{
    if (n==0)
        return 1;
    if (n%2 == 0)
        return power2(m*m,n/2);
    return m * power2(m*m,(n-1)/2);
}

int main()
{
    int r;
    int q;
    r = power(2,9);
    q = power2(2,9);
    cout << r << endl;
    cout << q << endl;
    return 0;
}