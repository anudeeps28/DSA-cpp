// #include<iostream>
// using namespace std;

// /* time taken by all these functions mentioned is constant*/

// // defining a structure for stack
// struct Stack
// {
//     int size;
//     int top;
//     int *S;
// };

// // creating a stack
// void create(struct Stack *st)
// {
//     cout << "what is the size of the stack";
//     cin >> (*st).size;
//     (*st).top = -1;
//     (*st).S = new int[(*st).size];
// }

// // function for displaying the stack
// void Display(struct Stack st) // calling by value because this is not going to modify the stack
// {
//     int i;
//     for(i = st.top; i>= 0; i--) // displaying from the top
//     {
//         cout << st.S[i];
//     }
//     cout << endl;
// }

// // push function in stack
// void push(struct Stack *st, int x)
// {
//     if ((*st).top == (*st).size - 1)
//         cout << "stack overflow";
//     else
//     {
//         (*st).top++;
//         x = (*st).S[(*st).top];
//     }
// }   

// // pop function
// int  pop(struct Stack *st)
// {
//     int x = -1;

//     // checking if the stack is empty
//     if ((*st).top == -1)
//         cout << "stack underflow";
//     else
//     {
//         x = (*st).S[(*st).top--];
//     }
//     return x;
// }

// int main()
// {
//     // creating stack 
//     struct Stack st;
//     create(&st);

//     // pusing some values in stack
//     push(&st, 10);
//     push(&st, 20);
//     push(&st, 30);
//     push(&st, 40);

//     // displaying the contents of the stack
//     Display(st);

//     pop(&st);
//     Display(st); 

//     return 0;
// }


#include <iostream>
using namespace std;
 
class Stack{
private:
    int size;
    int top;
    int* S;
public:
    Stack(int size);
    ~Stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isFull();
    int isEmpty();
    void display();
    int stackTop();
};
 
Stack::Stack(int size) {
    this->size = size;
    top = -1;
    S = new int[size];
}
 
Stack::~Stack() {
    delete[] S;
}
 
void Stack::push(int x) {
    if (isFull()){
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        S[top] = x;
    }
}
 
int Stack::pop() {
    int x = 1;
    if (isEmpty()){
        cout << "Stack Underflow!" << endl;
    } else {
        x = S[top];
        top--;
    }
    return x;
}
 
int Stack::peek(int index) {
    int x = -1;
    if (top-index+1 < 0 || top-index+1 == size){
        cout << "Invalid position!" << endl;
    } else {
        x = S[top-index+1];
    }
    return x;
}
 
int Stack::isFull() {
    if (top == size-1){
        return 1;
    }
    return 0;
}
 
int Stack::isEmpty() {
    if (top == -1){
        return 1;
    }
    return 0;
}
 
void Stack::display() {
    for (int i=top; i>=0; i--){
        cout << S[i] << " | " << flush;
    }
    cout << endl;
}
 
int Stack::stackTop() {
    if (isEmpty()){
        return -1;
    }
    return S[top];
}
 
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk(sizeof(A)/sizeof(A[0]));
 
    // Populate stack with array elements
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
    stk.push(11);
 
    cout << "Stack full: " << stk.isFull() << endl;
 
    // Display stack;
    cout << "Stack: " << flush;
    stk.display();
 
    // Peek
    cout << "Peek at 0th: " << stk.peek(0) << endl;
    cout << "Peek at 3rd: " << stk.peek(3) << endl;
    cout << "Peek at 10th: " << stk.peek(10) << endl;
 
    // Top element
    cout << "Top element: " << stk.stackTop() << endl;
 
    // Pop out elements from stack
    cout << "Popped out elements: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
    stk.pop();
 
    cout << "Stack empty: " << stk.isEmpty() << endl;
 
    return 0;
}