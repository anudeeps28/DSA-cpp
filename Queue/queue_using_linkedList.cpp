#include<iostream>
using namespace std;


// structure of the node for linekd list
struct Node
{
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

// enqueue function
void enqueue(int x)
{
    struct Node *t;
    t = new Node;

    if (t == NULL)
        cout << "Queue is full";
    else
    {
        t->data = x;
        t->next = NULL;

        if (front == NULL) // if this is the only node
            front = rear = t; // make both point on that node
        
        else{
            rear ->next = t;
            rear = t;
        }
    }
}
// dequeue
int dequeue()
{
    int x = -1;
    struct Node *t;

    if (front == NULL)
        cout << "Queue is Empty";
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }

    return x;

}

// displaying
void Display()
{
    struct Node *p;
    while(p)
    {
        cout << p->data;
        p = p->next;
    }
    cout << endl;
}

int main()
{
    // no need to create any variables for q, we can directly start writing
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    Display();

    return 0;
}