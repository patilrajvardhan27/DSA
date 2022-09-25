#include<iostream>
using namespace std;
///////////////////////// Notes //////////////////////////
//////////////////////////       //////////////////////////

/*
TYPER OF RECURRISION :

            1.TAIL RECURRISION
            2.HEAD RECURRISION
            3.TREE RECURRISION
            4.INDIRECT RECURRISION
            5.NESTED  RECURRISION
*/

//            1.TAIL RECURRISION

// ++  EVERYTHING IS PERFORMED AT CALLING TIME ONLY I.E NO PROCESS IS DONE AT RETURNING TIME





//            2.HEAD RECURRISION
// ++   EVERYTHING IS PERFORMED AT RETURNING TIME ONLY I.E NO PROCESS IS DONE AT CALLING TIME

//            3.TREE RECURRISION
// ++ A RECURSIVE FUNCTION CAALLING ITSELF FOR FOR THAN ONE TIME IS CALLED TREE RECURSION

//            4.INDIRECT RECURRISION
// ++ A FUNCTION (A) IS CALLED AND THEN IN FUNCTION (B) IS CALLED WHICH HAS CALLING OF FUNCTION (A) AGAIN IB ITS CODE BLOCK THIS CALLING
//      of function (A) by (bA) IS CALLED INDIRECT FUNCTION

/*
void funB(int n);
void funA(int n){
    cout<<" "<<n;
    funB(n-1);
}
void funB(int n){
    if (n>1)
    {
        cout<<" "<<n;
        funA(n/2);
    }
    
}
int main(){
    funA(20);
    return 0;
}
*/

//            5.NESTED  RECURRISION
//  ++

int fun(int n){
    if(n>100){
        return n-10;}
        else
        return fun(fun(n+11));
    
}
int main(){
    int r;
    r =fun(95); 
    cout<<" "<<r;
}





//  #NOTE: A FUNCTION CALLING ITSELF ONLY ONE TIME IS CALLED LINEAR RECURSION
/*
void fun(int n){
    if (n>0)
    {
       cout<<n;
       fun(n-1);
       fun(n-1);    
    }
    
}
int main(){
    int a = 3;
    fun(a);
}*/
