#include <iostream>
using namespace std;

int main()
{
    int i;
    int   *p, *q;
    p = new int[5]; // old array
    p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5;

    q = new int[10]; // new pointer

    for (i = 0; i < 5; i++) // copying elements from p to q
    {
        q[i] = p[i];
    }
    
    delete p; // freeing p (old memory location)
    p = q; // pointing p to were q points (address of q is given to p)
    q = NULL; // making q null so that p is the only pointer pointing there
    for (i = 0; i<5; i++)
    {
        cout << p[i] << endl;
    }    
  
    return 0;
}