// this is the header file for tree_basics_in_c.c

// creating the node for each node of tree
struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};

// defining queue in which we will store addresses of tree nodes
struct Queue
{
 int size;
 int front;
 int rear;
 struct Node **Q;
};

// creating the queue function
void create(struct Queue *q,int size)
{
 q->size=size;
 q->front=q->rear=0;
 q->Q=(struct Node **)malloc(q->size*sizeof(struct
Node *));
}

// function to add elements in the queue
void enqueue(struct Queue *q,struct Node *x)
{
 if((q->rear+1)%q->size==q->front)
 printf("Queue is Full");
 else
 {
 q->rear=(q->rear+1)%q->size;
 q->Q[q->rear]=x;
 }
}

// function to remove elements from the queue
struct Node * dequeue(struct Queue *q)
{
 struct Node* x=NULL;

 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front=(q->front+1)%q->size;
 x=q->Q[q->front];
 }
 return x;
}

// function to check if a queue is empty or not
int isEmpty(struct Queue q)
{
 return q.front==q.rear;
}