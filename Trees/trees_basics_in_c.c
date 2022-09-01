#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// declaring a global variable to be accessed from anywhere
struct Node *root=NULL;

// function to create tree
void Treecreate()
{
 struct Node *p,*t;
 int x;
 struct Queue q;
 create(&q,100);

// making the root node
 printf("Eneter root value ");
 scanf("%d",&x);
 root=(struct Node *)malloc(sizeof(struct Node));
 root->data=x;
 root->lchild=root->rchild=NULL;
 // adding the address of root node into queue
 enqueue(&q,root);

// making children of nodes
 while(!isEmpty(q))
 {
 p=dequeue(&q); 

 // making left child
 printf("eneter left child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 enqueue(&q,t);
 }

 // making right child
 printf("eneter right child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 enqueue(&q,t);
 }
 }
}

// displaying in preorder
void Preorder(struct Node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}

// display in inorder
void Inorder(struct Node *p)
{
 if(p)
 {
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}

// display in post order
void Postorder(struct Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}


// the main function 
int main()
{
 Treecreate();
 Preorder(root);
 printf("\nPost Order ");
 Postorder(root);

 return 0;
}