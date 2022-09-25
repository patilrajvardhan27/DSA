#include<iostream>
using namespace std;
/*
int main(){
    int a =10;
    int &r = a;
    
     // '&' means reference

    cout<<a<< "\n"<<r<<endl;

    
    
}
    
*/ 

/*
struct Rectangle
{
    int length;
    int breadth;

};
int main(){
    
    Rectangle r={10,12};
    Rectangle *p = &r;
 
    r.length = 20;        For normal variable
    p->length = 20;     //For pointer variable           [method to access structure using pointer]
    
    
}*/

//          Create objet dynamically in heap using pointer 

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    Rectangle *p;
    (struct Rectangle *)malloc ( sizeof( struct Rectangle));
    p->length = 10;
    p->breadth = 12;
    cout<<p->length;
}