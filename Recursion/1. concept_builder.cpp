#include <iostream>
#include<stdio.h>

//tail recursion
void fun(int n)
{
    if (n>0)
    {
        printf("%d\n", n); // printing during calling time
        fun(n-1); // RECURSION = Function calling itself (with a different parameter)
    }
}

// head recursion 
void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);
        printf("%d\n", n); // printing during returning time
    }
}
 
int main()
{
    int x = 3;
    fun(x);
    fun2(x); 
}

