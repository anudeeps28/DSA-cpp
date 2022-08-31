#include<iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

// function to create a queue (to be used for Tree)
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new int;
}
int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}
int main()
{

    return 0;
}