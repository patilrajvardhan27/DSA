#include<iostream>
using namespace std;

//Creating a node
struct Node
{
    int data;
    struct Node *next;
}*first =0,*last,*second =0,*third =0;

//Creating a Linked List
void createLL(int A[], int n){

    int i;
    struct Node *t,*last;

    first = new Node;
    first ->data =A[0];
    first->next =0;
    last =first;

    for ( i = 1; i < n; i++)
    {
        t=new Node;
        t->data = A[i];
        t ->next =0;
        last->next =t;
        last =t;
    }
}

void createLL2(int B[], int n){

    int i;
    struct Node *t,*last;

    second = new Node;
    second ->data =B[0];
    second->next =0;
    last =second;

    for ( i = 1; i < n; i++)
    {
        t=new Node;
        t->data = B[i];
        t ->next =0;
        last->next =t;
        last =t;
    }
}
/*
void Disply(struct Node *p){

    while (p!=0)
    {
        cout <<  p->data  ;
        p= p->next;

}
}*/


/*
// prints LL data in reverse order
void RBdisplay(struct Node *p)
{
    if (p!=0)
    {
        RBdisplay(p->next);
        cout << p->data << " ";
    }
    
}*/

//prints LL data in 1st to last order
void Rdisplay(struct Node *p)
{
    if (p!=0)
    {
        cout << p->data << " ";
        Rdisplay(p->next);
        
    }
    
}

//Counting elements in Node
int count(struct Node *p){
    int c=0;

    if(p==0){
        return 0;
    }else{
        return count(p->next) +1;
    }
}

//Addition of elements in Linked List
int add(struct Node *p){

    if(p==0){
        return 0;
    }else{
        return add(p->next)+p->data;
    }
}

//Finding maximum in Linked List

int max(struct Node *p){

    int x =0;

    if (p == 0)
    {
        return INT8_MIN;
    }else{
        x= max(p->next);
        if (x>p->data)
        {
            return x;
        }else{
            return p->data;
        }
        
    }
    
}

//Finding minimum element in Linked list
int min(struct Node *p){

    int x = 0;

    if(p == 0){
        return INT8_MAX;
    }else{
        x= min(p->next);
        if (x<p->data)
        {
            return x;
        }else{
            return p->data;
        }
        
        
    }

}

//Searching element in Linked list

struct Node *search (struct Node *p,int key){

    if(p !=0 ){
        return 0;
        if (key == p->data)
        {
            return (p);
        }else{
            return search(p->next , key);
        }
        
    }
}

//Inserting element in the linked list at any position

int insert(struct Node *p ,int pos, int x){
    struct Node *t;
    if (pos<0 || pos>count(p))
        return 1;
        t=new Node;
        t->data =x;
    if (pos == 0){
        t->next =first;
        first =t;
    }
    else{
        for (int i = 0; i < pos-1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next =t;
        }
        
    }
}
// inserting element at last position only

void lastins(int x){
    struct Node *t;
    t = new Node;
    t->data =x;
    t->next = 0;
    if (first =0){
        first = last  =t;}
        else{
            last ->next =t;
            last =t;
        }
    }    
    
    //deletes only firsr node
    void delFirst(struct Node *p){
        p=first;
        first = first->next;
        int x = p->data;
        delete p;
    }


    //deletes node a=t any given position
    void delpost(struct Node *p,int pos){

        int x;
        struct Node *q =0;
        p=first;
        for ( int i = 0; i < pos-1; i++)
        {
            q=p;
            p=p->next;   
        }
        q->next = p->next;
        x=p->data;
        delete p;
        
    }

    //Remove Duplicate in Linked list
    void Rdup(struct Node *p){
    p = first;        
    struct Node *q = first->next;

        while (q!=0)
        {
            if (p->data != q->data)
            {
                p =q;
                q= p->next;
            }else{
                p->next = q->next;
                delete q;
                q= p->next;
            }
            
        }
        
    }

 //concatinating two linked lists

 void concat(struct Node *p , struct Node *q){
    third = p;
    while (p->next != 0)
    {
        p =p->next;}
        p->next =q;  
 }


int main(){

    int A[] = {1, 2, 4, 8, 9, 7};
    int B[] = {5,6,11,97};
    createLL(A,6);
    createLL2(B,4);

    // RBdisplay(first);
    // cout << endl;
    // Rdisplay(first);
    // cout << endl;
    // cout << count(first);
    // cout<<endl;
    // cout << add(first);
    // cout<<endl;
    // cout<<max(first);
    // cout<<endl;
    // cout<<min(first);
    // cout<<endl;
    // insert(first , 0 ,4);
    // Rdisplay(first);
    //lastins(11);
    //Rdisplay(first);

    
    // Rdisplay(first);
    // cout<<endl;
    // Rdisplay(second);
    concat(first,second);
    Rdisplay(third);
}