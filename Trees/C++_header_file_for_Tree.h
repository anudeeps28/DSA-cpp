#include <iostream>
using namespace std;

// Queue class should be using a node for a tree
// this is the node of a tree
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

// class for Queue: this class should store the addresses of the tree
class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q; // a node pointer to a pointer Q
public: // the functions I should have
    Queue(){front = rear = -1; size = 10; Q = new Node*[size];} // non parametrized constructor
    Queue(int size) {front = rear = -1; this->size = size; Q = new Node*[this->size];} // parametrized constructor
    void enqueue(Node* x); // to add an element
    Node* Dequeue(); // to delete an element
    int isEmpty(){return front == rear;} // returns if queue is empty, i.e. if front = rear
    void Display(); // displaying a queue
};

// function to add
void Queue::enqueue(Node* x)
{
    // checking if queue already full or not
    if(rear ==  size - 1)
        cout << "Queue is full";
    else
    {
        rear++;
        Q[rear] = x;
    }
}

// function to delete from queue
Node* Queue::Dequeue()
{
    Node* x = NULL;
    
    // checking if queue is empty
    if (front == rear)
        cout << "queue is empty";
    else
    {
        x = Q[front+1];
        front++;
    }

    return x;
}

// function to display the queue
void Queue::Display()
{
    for (int i = front + 1; i<= rear; i++)
        cout << Q[i];
    cout << endl;
}