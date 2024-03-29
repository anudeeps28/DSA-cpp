#include<iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next; 
}*first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    // forming the linked list
    for (i = 1;i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p)
    {
        cout << p->data;
        p = p->next;
    }
    cout << endl;
}

int Length(struct Node *p)
{
    int len = 0;

    while (p)
    {
        len ++;
        p = p->next;

    }

    return len;
}

int main()
{
    int A[] = {1,2,3,4,45};
    create(A,5);
    
    cout << "length is" << Length(first);

Display(first);

    return 0;
}