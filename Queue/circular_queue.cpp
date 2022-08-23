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
    q->front = q->rear = 0;
    q->Q = new int[size];
}

// adding elements to a queue = enqueue
void enqueue(struct Queue *q, int x)
{
    if((q->rear +1)%q->size == q->size - 1) // checking if the queue is already full
        cout << "queue is full";
    else
    {
        q->rear = (q->rear+1)%q->size; // incrementing rear
        q->Q[q->rear] = x;
    }
}

// dequeue = deleting elements from the queue
int dequeue(struct Queue *q)
{
    int x = -1;

    if(q->rear == q->front) // checking if the queue is empty already or not
        cout << "queue is empty";
    else
    {
        q->front = (q->front+1)%q->size; // incrementing front
        x = q->Q[q->front]; // value in array wherever front is pointing
    }
    return x;
} 

// display function
void Display(struct Queue q) // we don't neet to change the elements, so we call by value only
{
    int i = q.front+1;

    do
    {
         cout << q.Q[i];
         i = (i + 1)%q.size;
    } while (i != (q.rear+1)%q.size);
    
    cout << endl;
}

int main()
{
    // creating object inside main function
    struct Queue q; // for accessing stuff
    Create(&q,5);

    // inserting elements
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);

    // displaying elements
    Display(q);

    // deleting first element
    cout << dequeue(&q) << endl;

    // // displaying after deleting
    Display(q);

    return 0;
}