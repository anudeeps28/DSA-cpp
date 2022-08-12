#include<iostream>
using namespace std;

// structure for circular linked list
struct Node
{
    int data;
    struct Node *next;
}*Head;

// creating the circular linked list
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head ->data = A[0];
    Head->next = Head;

    // creating new node
    for (i = 0; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next =  t;
        last = t;
    }

}

void Display(struct Node *h)
{
    // we cannot use while because it is not possible (if we give the condition, the first condition will itself be false)
    do
    {
        cout << h->data;
        h = h->next;
    } while (h != Head);
    
        
}

// function to find the length of a circular linked list

/*
This function is the same that we used in linear linked list,
just that here we needed to use the do while loop
*/

int Length(struct Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    
    return len;
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
  
    // checking if the index is valid or not
    if (index < 0 || index > Length(p))
        return;

    // Inserting before head if the index is 0
    if (index == 0)
    {
        t = new Node;
        t->data = x;
        if (Head == NULL)
        {
            Head = t;
            Head->next= Head;
        }
        // if there are some nodes present already in the linked list
        else
        {
            while (p->next != Head)
                p = p->next;

            // after p has reached the last node
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }

    // else if the index is not 0, the code is same as that of inserting in a linear linked list
    else
    {
        // traversing to the node where we need to insert
        for (i = 0; i < index -1; i++)
            p = p->next;

        // creating new node
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;

    } 
}

int Delete (struct Node *p, int index)
{
    struct Node *q;
    int i, x;

    // checking for valid index
    if (index < 0 || index > Length(Head))
        return -1;

    // inserting at first node
    if (index == 1)
    {
        while(p->next != Head)
            p = p->next;
        x = Head->data;
        
        // if this is the only node
        if (Head == p)
        {
            free(Head);
            Head = NULL;
        }
        else // if this is not the only node
        {
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }

    }

    // if the index is not 1 (if we don't have to insert at the first node)
    else // the process is similar to deleting from a linear linked list
    {
        for (i = 0; i < index -2; i++)
        {
            p = p -> next;
        }
        q = p -> next;
        p -> next = q -> next;
        x = q -> data;
        free(q);
    }

    return x; // returning the deleted element

}
int main()
{   
    int A[] = {2,3,4,5,6};
    create(A,5);
    Display(Head);
    Delete(Head, 1);
    return 0;
}