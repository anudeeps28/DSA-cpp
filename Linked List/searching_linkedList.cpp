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

// linear search function (returns a structure type node)
struct Node * LinearSearch(struct Node *p, int key) // key = the thing that we have to search 
{
    while(p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return 0;
}

// implementing linear search with move to header (improving search)
struct Node * LinearSearch2(struct Node *p, int key) // key = the thing that we have to search 
{
    struct Node *q;
    while(p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p ->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return 0;
}

// recursive version of linear search
struct Node * RecursiveSearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RecursiveSearch(p->next, key);
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

int main()
{

    int A[] = {3,5,7,10,15};

    create(A,5);

    struct Node *temp; // declaring a temporaty structure node 
    struct Node *temp2;
    struct Node *temp3;

    // temp = LinearSearch(first, 117);
    // if (temp)
    //     cout << "key is found " << temp->data << endl;
    // else
    //     cout << "key not found";
    // return 0;

    // temp2 = RecursiveSearch(first,15);
    // if (temp2)
    //     cout << "key is found " << temp2->data << endl;
    // else
    //     cout << "key not found";
    // return 0;

    // after implementing improved search, the order of linked list changes
    temp3 = LinearSearch2(first, 15);
    temp3 = RecursiveSearch(first,15);
    if (temp3)
        cout << "key is found " << temp3->data << endl;
    else
        cout << "key not found";


    Display(first); 

    return 0;

}