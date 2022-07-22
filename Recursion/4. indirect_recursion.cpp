#include<iostream>
using namespace std;

void funB(int n); // funB is inside funA but is defined later; so we have to initialize funB before so that it can be used in funA

void funA(int n)
{
	if (n>0)
	{
		printf("%d", n);
		funB(n-1);
	}
}

void funB(int n)
{
	if (n>1)
	{
		printf("%d",n);
		funA(n/2);
	}
}

int main()
{
    funA(20);
    return 0;
}