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

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    // new node to be inserted
    t = new Node;
    t->data = x;
    t->next = NULL;

    // is it a first node created
    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p==first)
        {
            p->next = first;
            first = t;
        }    
        else{
            t->next = q->next;
            q->next = t;
        }
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

    SortedInsert(first, 35);

    cout << endl; 

    Display(first);
    
    
    return 0;
}