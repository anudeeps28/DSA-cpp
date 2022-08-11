#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
}*first, *second = NULL, *third = NULL; 

// create 2 linked lists
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

void create2(int A[], int n)
{
    int i;
    struct  Node *t, *last;
    second = new Node;
    second -> data = A[0]; // we access data and next of a linked list node usin "->"
    second -> next = NULL;
    last = second;

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

// function to concatinate 2 linked lists
void concatinate(struct Node *p, struct Node *q)
{
    third = p;
    
    while (p->next != NULL)
    {
        p = p->next;
    
    }
    p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;

     // making p or q pointing to the smaller of the first element of the 2 linked lists
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third ->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    // keep on checking the data of p and q, whichever is smaller should be linked to 3rd linked list
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p-> next;
            last -> next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q-> next;
            last -> next = NULL;
        }
    }
    
    if (p) last->next = p;
    if (q) last->next = q; 

}

int main()
{

    int A[] = {3,5,7, 10,15};
    int B[] = {1,2,3,4,5};

    create(A,5);
    create2(B,5);

    cout << "first:";
    Display(first);
    cout << endl;

    cout << "second:";
    Display(second);

    cout << endl;

    concatinate(first,second);
    cout << "third:";
    Display(third);

    cout << endl;
    Merge(first,second);
    Display(third);

    return 0;
}