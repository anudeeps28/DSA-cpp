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

int count (struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t; // new pointer to insert
    int i;

    if (index < 0 || index > count(p)) // checking for valid index
        return;
    t = new Node;
    t->data = x;

    // if index = 0, it has to be inserted as first node
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index -1; i++)
            p = p->next; // moving to the desired locaion
        t->next = p->next;
        p->next = t;
    
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

/*
We can even use this insert function to create a linked list from scratch
*/
int main()
{

    int A[] = {3,5,7,10,15};

    create(A,5);

    Display(first);

    Insert(first, 0, 10);

    Display(first);
    return 0;
}