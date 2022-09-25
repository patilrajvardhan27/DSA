#include<iostream>
using namespace std;

struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root = 0;

void Insert(int key){
    struct Node *t = root;
    struct Node *r ;
    struct Node *p;

    if (root == 0)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild =0;
        root =p;
        return;
    }
    
    while (t != 0)
    {
        r=t;
        if(key < t->data)
        t=t->lchild;
        else if(key > t->data)
        t=t->rchild;
        else
        return;
    }

    p = new Node;
    p->data = key;
    p->lchild=0;
    p->rchild =0;
    if(key < r->data)
    r->lchild =p;
    else
    r->rchild = p;
    
}
void Inorder(struct Node *p){
    if(p){

    Inorder(p->lchild);
    cout <<p->data<< " ,"<<flush;
    Inorder(p->rchild);
}
}

int main(){

    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);

    Inorder(root);

}