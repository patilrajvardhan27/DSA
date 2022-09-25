#include<stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    printf("The elments in array are\n");

    for ( i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i] );
    }
    
}
 // Method 1 ...... Transposition

void Swap ( int *x , int *y){
    int temp;
    temp =*x;
    *x =*y;
    *y =temp;  
}

int Search(struct Array *arr , int key ){
    int i;
    for ( i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]);
        return i;
        }
            } 
    return -1;
}
//Linear Search Basic Method
/*

int Search(struct Array arr , int key ){
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        return i;
            } 
    return -1;
}*/

int main(){

    struct Array arr = {{2,3,4,5,6},10,5};

    printf("%d\n", Search(&arr ,5));

    Display(arr);
    return 0;
}