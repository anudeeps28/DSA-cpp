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

// function to check if the linked list is looped or not
int isLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        q = q?q->next:q; // if q is not equal to NULL, then it will move to next node, otherwise it will stay wheere it is
    } while (p && q && p != q); // all this process is continued until the condition inside the brackes is true
    if (p == q)
    {
        return 1;
    }
    else
        return 0;
    
}

int main()
{

    int A[] = {3,5,7,10,15};
    create(A,5);

    // making the linked list loops
    struct Node *t1, *t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1; // so now, the linked list is looped

    cout << isLoop(first);

    //Display(first);

    return 0;
}