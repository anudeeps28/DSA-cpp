#include<iostream>
using namespace std;

int main()
{
    char A[] = "How are   you";

    int i, word = 1, vcount = 0;

    for (i = 0; A[i] != '\0'; i++)
        if (A[i] == ' ' && A[i-1] != ' ')
            word ++;

    cout << word << endl;

    // finding number of vowels in a string
    for (i = 0; A[i] != '\0'; i++)
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'u' || A[i] == 'i' || A[i] == 'o' || A[i] =='A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
            vcount ++;
    cout << vcount;
}


