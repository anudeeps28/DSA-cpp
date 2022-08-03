#include<iostream>
using namespace std;

// using hash table
int main()
{
    char A[] = "finding";
    int H[26], i;

    // filling hash table
    for (i = 0; A[i] != 0; i++)
    {
        H[A[i]-97] += 1;
    }

    // now scanning hashtable
    for (i = 0; i < 26; i++)
    {
        if (H[A[i] > 1])
        {
            cout << i+97;
            cout << H[i];
        }
    }
}