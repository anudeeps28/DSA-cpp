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

// function to count the number of nodes
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

// function to count using recursion
int Rcount (struct Node *p)
{
    if(p != NULL)
    {
        return Rcount(p->next) + 1;
    }
    else   
        return 0;
}

// finding sum (iterative)
int sum(struct Node *p)
{
    int s = 0;

    while (p != 0)
    {
        s+= p->data;
        p = p->next;
    }
    return s;
}

// recursive sum function
int Rsum(struct Node *p)
{
    if (p == NULL)
        return 0;
    else  
        return Rsum (p->next) + p->data;
}
int main()
{
    int A[] = {3,5,6,10,15};
    create(A,5);
    cout << "The length is " << count(first) << endl; 
    cout << "the length using recursion " << Rcount(first) << endl;
    cout << "the sum is " << sum(first) << endl;
    cout << "the sum using recursion is " << Rsum(first) << endl;
    return 0;
}