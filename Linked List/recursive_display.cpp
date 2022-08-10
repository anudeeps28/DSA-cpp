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

// RECURSIVE function to display the linked list
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        RDisplay(p->next); 
        cout << p->data << endl; // this will print the elements in reverse
    }
}
int main()
{
    int A[] = {3,5,7,10,15};

    create(A,5);

    RDisplay(first);

    return 0;
}