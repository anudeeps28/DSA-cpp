#include<iostream>
using namespace std;

// using hash table
int main()
{
    char A[] = "decimal";
    char B[] = "medical";
    int i, H[26] = {0};

    // filling hash table with 1s
    for ( i = 0; A[i] != '\0'; i++)
    {
        H[A[i]-97]+= 1;

    }

    // checking back hash table with all elements repeating
    for (i = 0; B[i] != '\0'; i++)
    {
        H[B[i]-97] -= 1;
        
        if (H[A[i]-97] < 0)
        {
            cout << "not anagram";
            break;
        }
        
    }

    if (B[i]== '\0')
    {
        cout << "it is anagram";
    }
    
}