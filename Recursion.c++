#include<iostream>
using namespace std;

///////////////////////// Notes //////////////////////////
//////////////////////////       //////////////////////////

/*
Recurssion has two phases

1 > calling phase  -- Also known as ascending

2 > returning phase -- Also known as descending

++ recursive functions are memory consuming

++ Static variable and Local variable will use same process
in these both --fun (n-1)+n;  //calling  -- (n-1)    //returning -- +n

*/

/*
int fun (int n)
{
    if (n>0)
    {
        
        fun (n-1);  //calling  --  Ascending
        cout<<"\n" <<n;   //returning -- Descending
    }
    
}

int main(){
    int a = 3;
    fun(a);
}
*/

/*
++  Local Variable
int fun (int n)
{
    if (n>0)
    {
        
       return fun (n-1)+n;  //calling  -- (n-1)    //returning -- +n
        
    }
    return 0;
}

int main(){
    int a = 5;
    cout<<"\n" <<fun(a);   //returning -- Descending
}
*/
/*

++  Static Varable

int fun(int n){
    static int x =0;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
     int a =5;
     cout<<"\n"<<fun(a);
}
*/
