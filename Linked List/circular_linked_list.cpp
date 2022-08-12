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

int main()
{   
    int A[] = {2,3,4,5,6};
    create(A,5);
    Display(Head);
    return 0;
}