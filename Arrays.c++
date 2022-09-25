#include<iostream>
using namespace std;
/*
int main(){
    int A[5] = { 2 ,4 , 6 , 8 , 10};
    int i;
    for ( i = 0; i < 5; i++)
    {
        cout<<"\n"<<&A[i];

    }
    
}*/
/*
int main(){

                    //  Creating Array in stack

    int A[5]={2,4,6,8,10};

    // Creating array in heap

    int *p;
    p =new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;

    // printing array in stack

    for( int i = 0; i < 5; i++){
        cout<<" "<<A[i];}

cout<<"\n";

    // printing array in heap

    for(int i=0;i<5;i++){
    cout<<" "<<p[i];}

    return 0;
}
*/

/*
//         Increasing the size of Array in heap

int main(){

    // array pointer p and q
    int *p,*q;
    int i;

    // initialize and add elements in p

    p  = new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;
    
    // initalize a new array of increased size
    
    q = new int[10];
    for ( i = 0; i < 10; i++)
    {
      q[i]=p[i]; // coping elements of p in q

    }
    free(p); // deleting elements array p 
    p=q; // pointing p to q

    q=NULL; // removeing pointing of q towards its elements

    

    for (i = 0; i < 5; i++)
    {
        cout<<" " << p[i]; // printing resized array p
    }

    return 0;
    
}
*/
     
