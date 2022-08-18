#include<iostream>
using namespace std;

// structure of queue
struct Queue
{
    int size;
    int front; // front pointer
    int rear; // rear pointer
    int *Q; // space for storing elements (dynamically creating memory in heap)
};

// creating queue
void Create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}

// adding elements to a queue = enqueue
void enqueue(struct Queue *q,int x)
{
    if(q->rear == q->size - 1)
        cout << "queue is full";
    else
    {
        q->rear++;
        Q[q->rear] = x;
    }
}



int main()
{
    // creating object inside main function
    struct Queue q;
    Create(&q,5);

    return 0;
}