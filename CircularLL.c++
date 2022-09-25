#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[] , int n){
    int i;
    struct Node *t,*last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last =head;
     for ( i = 1; i < n; i++)
     {
        t =new Node;
        t->data = A[i];
        t->next = last->next;
        last->next =t;
        last =t;
     }
}

int Display(struct Node *p){
    
    do
    {
        cout <<p->data  ;
        p=p->next;
    } while (p !=head );
}
 //Inserting element in ciricular Linked Lsit{ 

 void InsertEle(struct Node *p,int index , int x){
    int i;
    struct Node *t;

//when index is zero
    if (index == 0 )
    {
        t = new Node;
        t ->data =x;
    
    if (head == 0)
    {
        head =t;
        head->next = head;
}
else{
        while (p->next != head)
        p = p->next;
        p->next = t;
        t->next = head;
        head =t; 
    }
 }
  //when index is not zero
 else{
    for ( i = 0; i < index -1; i++)
    p=p->next;
    t = new Node;
    t->data =x;
    t->next = p->next;
    p->next = t;
    
 }
 }

//}

//Deleting element in a Circular Linked list{

int Delete(struct Node *p,int pos){
    struct Node*q;
    int x,i;

    if (pos == 1)
    {
        p=head;

        while (p->next != head)
        {
            p = p->next;
            x = head->data;
        }
        if (p == head)
        {
            delete head;
            head =0;
        }
        else{
            p->next = head ->next;
            delete head;
            head = p->next;
        }
        
        
    }
    else{
        p = head;
        for ( i = 0; i < pos -2; i++)
        p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete (q);   
    }    
    return x;
}


int main(){
    int A[] = {1,6,7,9,3,4,8};
    create(A,7);

    //InsertEle(head,1,8);
    Delete(head,2);
    Display(head);
}