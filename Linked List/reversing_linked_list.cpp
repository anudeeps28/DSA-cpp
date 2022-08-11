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

// function to display the linked list
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data;
        p = p ->next;
    }

}

// reversing the linked list using array
void Reverse1(struct Node *p)
{
    struct Node *q; // for traversing through the linked list
    int *A, i= 0;
    A = new int[count(p)];

    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }

    q = p; // once the loop has been completed, q should start from first again
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;    
    }
}

// reversing by changing the direction of pointers
void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p ->next;
        q->next = r;
    } 
    first = q;
}

// recursive function to reverse
void Reverse3(struct Node *q, struct Node *p)
{
    if (p)
    {
        Reverse3(p,p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{

    int A[] = {3,5,7,10,15};

    create(A,5);

    Display(first);
    
    Reverse2(first);
    cout << endl; 

    Display(first);

    Reverse3(NULL,first);
    cout << endl; 

    Display(first);

    return 0;
}