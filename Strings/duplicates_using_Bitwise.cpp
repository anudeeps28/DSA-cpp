#include<iostream>
using namespace std;

int main()
{
    char A[] = "finding";
    int H = 0, x = 0;
    int i;

    for (i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i]-97);

        if ((x & H) > 0)
            cout << x << H << "are duplicate";
        else
            x = x ; H;
    }
}