#include <iostream>
#include <stdio.h>
#include "C++_header_file_for_Tree.h"
#include "C++_Stack_header_file.hpp"
#include "../Stack/stack_using_arrays.cpp"

using namespace std;

class Tree
{
private:
    Node *root; // pointer to a root node
public:
    Tree(){root = NULL;}
    void CreateTree();
    void Preorder(){Preorder(root);} // dummy function to point to the function which has parameters
    void Preorder(Node *p);
    void Postorder(){Postorder(root);}
    void Postorder(Node *p);
    void Inorder(){Inorder(root);}
    void Inorder(Node *p);
    void Levelorder(){Levelorder(root);}
    void Levelorder(Node *p);   
    int Height(){return Height(root);}
    int Height(Node *root);
    void iterativePreorder(Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node* p);
    void iterativePostorder() { iterativePostorder(root); }

};  

// creating the tree (using recursive functions)
void Tree:: CreateTree()
{
    Node *p,*t;
    int x;
    Queue q(100);

    // making the root node
    printf("Eneter root value ");
    scanf("%d",&x);

    root= new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;

    // adding the address of root node into queue
    q.enqueue(root);

    // making children of nodes
    while(!q.isEmpty())
    {
        p=q.Dequeue(); 

        // making left child
        printf("eneter left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t= new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }

        // making right child
        printf("eneter right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t= new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}

// displaying in preorder
void Tree::Preorder(Node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

// display in inorder
void Tree:: Inorder(Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

// display in post order
void Tree:: Postorder(Node *p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ",p->data);
    }
}


// displaying in levelorder
void Tree::Levelorder(struct Node *root)
{
    Queue q(100);
    printf("%d ",root->data);
    q.enqueue(root);
    while(!q.isEmpty())
    {
        root=q.Dequeue();
        if(root->lchild)
        {
            printf("%d ",root->lchild->data);
            q.enqueue(root->lchild);
        }
        if(root->rchild)
        {
            printf("%d ",root->rchild->data);
            q.enqueue(root->rchild);
        }
        
    }
}

// height function
int Tree::Height(Node *root)
{
    int x=0,y=0;
    if(root==0)
        return 0;   

    x=Height(root->lchild);
    y=Height(root->rchild);

    if(x>y)
        return x+1;
    else
        return y+1;

}


// ITERATIVE TRAVERSALS FOR TREES //

// Iterative preorder
void Tree::iterativePreorder(Node *p) {
    Stack<Node*> stk;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            cout << p->data << ", " << flush;
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
    cout << endl;
}
 
// // iterative inorder
// void Tree::iterativeInorder(Node *p) {
//     Stack<Node*> stk;
//     while (p != nullptr || ! stk.empty()){
//         if (p != nullptr){
//             stk.emplace(p);
//             p = p->lchild;
//         } else {
//             p = stk.top();
//             stk.pop();
//             cout << p->data << ", " << flush;
//             p = p->rchild;
//         }
//     }
//     cout << endl;
// }
 
// // iterative postorder
// void Tree::iterativePostorder(Node *p) {
//     Stack<long int> stk;
//     long int temp;
//     while (p != nullptr || ! stk.empty()){
//         if (p != nullptr){
//             stk.emplace((long int)p);
//             p = p->lchild;
//         } else {
//             temp = stk.top();
//             stk.pop();
//             if (temp > 0){
//                 stk.emplace(-temp);
//                 p = ((Node*)temp)->rchild;
//             } else {
//                 cout << ((Node*)(-1 * temp))->data << ", " << flush;
//                 p = nullptr;
//             }
//         }
//     }
//     cout << endl;
// }


int main()
{
    Tree t; // making an object of class tree

    t.CreateTree(); // calling function CreateTree 
    t.Preorder();

    cout << "Iterative Preorder: " << flush;
    t.iterativePreorder();
 
    cout << "Iterative Inorder: " << flush;
    t.iterativeInorder();
 
    cout << "Iterative Postorder: " << flush;
    t.iterativePostorder();
 

    return 0;
}