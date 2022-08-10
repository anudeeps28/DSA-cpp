#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
}*first; // declaring a global pointer here only

// function to create a linked list from an array
void create(int A[], int n)
{
    int i;
    struct  Node *t, *last;
    first = new Node;
    first -> data = A[0]; // we access data and next of a linked list node usin "->"
    first -> next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t ->data = A[i];
        t->next = NULL;
        last ->next = t;
        last = t;
        
    }
}


// function to display the linked list
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data;
        p = p ->next;
    }

}


// finding maximum (iterative)
int Max(struct Node *p)
{
    int max = INT32_MIN;

    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

// finding max (recursion)
int RMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = RMax(p->next);
    if (x > p->data)
        return x;
    else return p->data;
}

int main()
{
    int A[] = {2,3,5,7,9};

    create(A,5);

    cout << Max(first);
    cout << RMax(first);

    return 0;
}