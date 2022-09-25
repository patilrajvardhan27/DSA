#include<stdio.h>

struct Array{
    int A[10];
    int size;
    int length;

};

void swap(int *x , int *y){

    int temp ;
    temp =*x;
    *x=*y;
    *y =temp;
}

int isSorted(struct Array arr){
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return -1;
}

int reArrange(struct Array *arr){
    int i = 0;
    int j = arr->length -1;

    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[i>=0])j--;

        if(i<j)swap(&arr->A[i],&arr->A[j]);
        
    }
}

void InsertSort (struct Array *arr , int x){
    int i = arr->length-1;
    if(arr->length == arr->size)
    return;
    while (i>=0 && arr->A[i] > x)
    {
        arr->A[i+1] = arr ->A[i];
        i--;
    }

    arr ->A[i+1] = x;
    arr->length ++;
    
}

void Display(struct Array arr){
    int i;
    printf("The elements are \n");
    for (i = 0; i < arr.length ; i++)
    printf("%d " , arr.A[i]);
}


int main( ){
    struct Array arr ={{2,-4,5,-6,7},10,5};

    reArrange(&arr);

    Display(arr);
}