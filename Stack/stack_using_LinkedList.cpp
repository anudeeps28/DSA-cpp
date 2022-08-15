#include<iostream>
using namespace std;

// class for node
class Node
{
public:
    int data;
    Node *next;
};

// class for stack
class Stack
{
private:
    Node *top;
public: // functions
    Stack(){top = NULL;} // non-paramatrized constructor
    void push(int x);
    int pop();
    void Display();
};

// push function
void Stack::push(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "stack is full";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

// pop function
int Stack::pop()
{
    int x = -1;
    if (top == NULL)
        cout << "stack is empty";
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

// display function
void Stack::Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;

    }

    cout << endl;
}

int main()
{
    // creating a function of class stack
    Stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.Display();

    cout << stk.pop();
    return 0;
}