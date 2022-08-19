#include<iostream>
using namespace std;

// class for Queue
class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;
public: // the functions I should have
    Queue(){front = rear = -1; size = 10; Q = new int[size];} // non parametrized constructor
    Queue(int size) {front = rear = -1; this->size = size; Q = new int[this->size];} // parametrized constructor
    void enqueue(int x); // to add an element
    int Dequeue(); // to delete an element
    void Display(); // displaying a queue
};

// function to add
void Queue::enqueue(int x)
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
int Queue::Dequeue()
{
    int x = -1;
    
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


int main()
{   
    // creating queue object of size 5
    Queue q(5);

    // taking actions on that object
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // displaying the queue
    q.Display();

    return 0;
}