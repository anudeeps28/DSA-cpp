#include<iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}
int main()
{

    return 0;
}