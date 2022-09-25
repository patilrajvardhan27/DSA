#include <iostream>
#include<stdio.h>
using namespace std;

class Node
{
public:
Node *lchild;
int data;
Node *rchild;
};
class Queue {
public:
int front;
int rear;
int size;
Node **Q;
public:
Queue(){front=rear=-1;size=10;Q=new Node*[size];}
Queue(int size){front=rear=-1;this->size=size;;Q=new
Node*[size];}
void enqueue(Node *x);
Node *dequeue();
int isEmpty(){ return front==rear;}
};
void Queue::enqueue(Node *x)
{
if(rear==size-1)
printf("Queue Full\n");
else
{
rear++;
Q[rear]=x;
}
}
Node *Queue::dequeue()
{
Node *x=NULL;
if(front==rear)
printf("Queue is Empty\n");
else
{
x=Q[front+1];
front++;
}
return x;
}

// Create Tree

struct Node *root;

void Treecreate(){
    struct Node *p  =0;
    struct Node *t = 0;
    int x;
    Queue q(100);

    cout<<"Enter root value" ;
    cin >> x;

    root = new Node;
    root ->data = x;
    root->lchild = root->rchild = 0;
    q.enqueue (root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << " enter left child "<<p->data;
        cin >> x;
        if (x != -1)
        {
            t= new Node;
            t->data =x;
            t->lchild = t->rchild = 0;
            p->lchild =t;
            q.enqueue(t);
        }
        cout<<"enter right child "<<p->data;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = 0;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void preorder(struct Node *p)
{
if(p)
{
printf("%d ",p->data);
preorder(p->lchild);
preorder(p->rchild);
}
}
int main(){
    Treecreate();
    preorder(root);
}