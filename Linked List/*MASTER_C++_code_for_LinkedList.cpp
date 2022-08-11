#include <iostream>
using namespace std;

// making the node class
class Node
{
public:
    int data;
    Node *next;
};

// making the linked list class
class LinkedList
{
private:
    Node *first;
public:
    LinkedList(){first=NULL;} // constructor
    LinkedList(int A[],int n); // constructor
    ~LinkedList(); // destructor

    // all the function that we are going to write
    void Display();
    void Insert(int index,int x);
    int Delete(int index);
    int Length();
};

// DEFINING ALL THE FUNCTIONS 

// function to create a linked list
LinkedList::LinkedList(int A[],int n)
{
    Node *last,*t; // this is how we declare the data type of a formed data structure class (we don't need to write struct etc.)
    int i=0;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

// function to delete a linked list
LinkedList::~LinkedList()
{
    Node *p=first;
    while(first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

// function to display the linked list
void LinkedList::Display()
{
    Node *p=first;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// function to find the length of linked list
int LinkedList::Length()
{
    Node *p=first;
    int len=0;

    while(p)
    {

        len++;
        p=p->next;

    }
    return len;
}

// function to insert a node in a linked list
void LinkedList::Insert(int index,int x)
{
    Node *t,*p=first;

    if(index <0 || index > Length()) // checking for valid index
        return;

    t=new Node;
    t->data=x;
    t->next=NULL;

    // inserting at first node
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    // inserting at any position after the first node
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }
}

// function to delete a node in linked list
int LinkedList::Delete(int index)
{
    Node *p,*q=NULL;
    int x=-1;

    if(index < 1 || index > Length()) // checking if the index is correct or not
        return -1;

    if(index==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }

    else
    {
        p=first;
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }

        q->next=p->next;
        x=p->data;
        delete p;
    }

    return x;
}

int main()
{
 int A[]={1,2,3,4,5};
 LinkedList l(A,5);

 l.Insert(3,10);

 l.Display();

 return 0;
}